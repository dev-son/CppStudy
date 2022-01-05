#pragma once

class Player;
class Monster;

class Field
{
public:
	Field();
	~Field();

	void Update(Player* player);
	void CreateMonster();

	void StartBattle(Player* player);
private:
	// 몬스터는 필드 밖으로 나올수 없으니까
	// 몬스터 한마리를 들고있게끔 만들어줫다.
	Monster* _monster;
};

