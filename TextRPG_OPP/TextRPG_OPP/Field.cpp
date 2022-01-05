#include "Field.h"
#include <stdlib.h>

#include "Monster.h"
#include "Player.h"
Field::Field()
	: _monster(nullptr)
{

}

Field::~Field()
{
	if (_monster != nullptr)
		delete _monster;
}

void Field::Update(Player* player)
{
	if (_monster == nullptr)
		CreateMonster();

	// 플레이어와 관련된 정보도 여기서 꺼내쓸 예정
	StartBattle(player);
}

void Field::CreateMonster()
{
	int randValue = 1 + rand() % 3;


	
	switch (randValue)
	{
	case MT_SLIME:
		// 타입변환으로 자식에서 부모로는 자연스럽게 변환이 된다.
		_monster = new Slime();
		break;
	case MT_ORC:
		_monster = new Orc();
		break;
	case MT_SKELETON:
		_monster = new SKeleton();
		break;
	}
}

void Field::StartBattle(Player* player)
{
	while (true)
	{
		player->PrintInfo();
		_monster->PrintInfo();

		// 플레이어 -> 몬스터 공격
		_monster->OnAttacked(player);

		if (_monster->IsDead())
		{
			_monster->PrintInfo();
			delete _monster;
			_monster = nullptr;
			break;
		}

		// 몬스터->플레이어 공격
		player->OnAttacked(_monster);

		if (player->IsDead())
		{
			player->PrintInfo();
			break;
		}
	}
}
