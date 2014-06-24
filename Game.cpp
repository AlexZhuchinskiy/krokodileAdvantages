#include "Game.h"


Game::Game(void)
{
	file.accessToFile("mainScene");
	int ans;
	cin >> ans;
	switch (ans)
	{
	case 1:
		goHome();
		break;
	case 2:
		comeToSwimmingPool();
		break;
	default:
		break;
	}
}


Game::~Game(void)
{
	
}

void Game :: startLabQuest(){
	
}