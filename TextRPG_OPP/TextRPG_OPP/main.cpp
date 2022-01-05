#include <iostream>
using namespace std;
#include "Game.h"

// 오늘의 주제 : TextRpg #4
// 
// c pp 파일에서는 전방선언을 하는게 아니다.
// 실제 코드가 당장 돌아가는 부분이라 인클루드를 막 해줘도 된다?
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