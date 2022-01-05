#include "Game.h"
#include <iostream>
using namespace std;
#include "Player.h"
#include "Field.h"


// 필드 자체를 생성자에서 초기화 해주는게 깔끔하고 좋으니까
// 생성자에서 초기화 해준다.
Game::Game()
	: _player(nullptr), _field(nullptr)
{

}

Game::~Game()
{
	// 게임에서 사실상 플레이어를 관리하고 있다 보니까
	// 여기에서 해제해준다 플레이어를
	if (_player != nullptr)
		delete _player;

	// 만약에 널포인트가 아니면 필드를 소멸 시켜준다.
	if (_field != nullptr)
		delete _field;
}

// 초기화 관련
void Game::Init()
{
	// Init 을 함 과 동시에 필드를 만들어줬다.
	_field = new Field();
}

// 매 프레임마다!
void Game::Update()
{
	if (_player == nullptr)
		CreatePlayer();

	if (_player->IsDead())
	{
		delete _player;
		_player = nullptr;
		CreatePlayer();
	}


	// 필드한테 건네주면서 실행흐름을 필드한테 준다.
	_field->Update(_player);
}

void Game::CreatePlayer()
{
	while (_player == nullptr)
	{
		cout << "------------------------" << endl;
		cout << "캐릭터를 생성하세요 !" << endl;
		cout << "1) 기사, 2) 궁수 3) 법사" << endl;

		cout << ">";

		int input = 0;
		cin >> input;

		if (input == PT_Knight)
		{
			_player = new Knight();
		}
		else if (input == PT_Archer)
		{
			_player = new Archer();
		}
		else if (input == PT_Mage)
		{
			_player = new Mage();
		}
	}
}
