#include "Game.h"
#include <iostream>
using namespace std;
#include "Player.h"
#include "Field.h"


// �ʵ� ��ü�� �����ڿ��� �ʱ�ȭ ���ִ°� ����ϰ� �����ϱ�
// �����ڿ��� �ʱ�ȭ ���ش�.
Game::Game()
	: _player(nullptr), _field(nullptr)
{

}

Game::~Game()
{
	// ���ӿ��� ��ǻ� �÷��̾ �����ϰ� �ִ� ���ϱ�
	// ���⿡�� �������ش� �÷��̾
	if (_player != nullptr)
		delete _player;

	// ���࿡ ������Ʈ�� �ƴϸ� �ʵ带 �Ҹ� �����ش�.
	if (_field != nullptr)
		delete _field;
}

// �ʱ�ȭ ����
void Game::Init()
{
	// Init �� �� �� ���ÿ� �ʵ带 ��������.
	_field = new Field();
}

// �� �����Ӹ���!
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


	// �ʵ����� �ǳ��ָ鼭 �����帧�� �ʵ����� �ش�.
	_field->Update(_player);
}

void Game::CreatePlayer()
{
	while (_player == nullptr)
	{
		cout << "------------------------" << endl;
		cout << "ĳ���͸� �����ϼ��� !" << endl;
		cout << "1) ���, 2) �ü� 3) ����" << endl;

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
