#include <iostream>
using namespace std;
#include "Game.h"

// ������ ���� : TextRpg #4
// 
// c pp ���Ͽ����� ���漱���� �ϴ°� �ƴϴ�.
// ���� �ڵ尡 ���� ���ư��� �κ��̶� ��Ŭ��带 �� ���൵ �ȴ�?
int main()
{
	Game game;
	game.Init();

	while (true)
	{
		game.Update();
	}

	return 0; 
}