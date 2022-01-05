#include "Game.h"
#include <iostream>
using namespace std;
#include "Player.h"


Game::Game()
	: _player(nullptr)
{

}

Game::~Game()
{

}

// �ʱ�ȭ ����
void Game::Init()
{

}

// �� �����Ӹ���!
void Game::Update()
{
	if (_player == nullptr)
		CreatePlayer();
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
