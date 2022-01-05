#pragma once

enum CreatureType
{
	CT_PLAYER = 0,
	CT_MONSTER = 1
};

class Creature
{
public:
	Creature(int creatureType)
		: _creatureType(creatureType), _hp(0), _attack(0), _defence(0)
	{

	}

	virtual ~Creature()
	{

	}

	// 순수 가상함수 무조건 반드시 사용해야함 상속 받는 애들은
	virtual void PrintInfo() = 0;

	void OnAttacked(Creature* attacker);
	bool IsDead() { return _hp <= 0; }

protected:
	int _creatureType;
	int _hp;
	int _attack;
	int _defence;
};

