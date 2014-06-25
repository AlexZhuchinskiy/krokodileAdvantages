#include "Game.h"


Game::Game(void)
{
	
}


Game::~Game(void)
{
	
}

void Game :: startQuest(){
	
}

void Game :: goHome(){
	file.accessToFile("goHome.txt");	
}

void Game :: comeToSwimmingPool(){
	
}

void Game :: menu(){
	system("cls");
	cout << "Crocodile Advantages" << endl;
	cout << "1.Start" << endl;
	cout << "2.Rules" << endl;
	cout << "3.Exit" << endl;
	char ans;
	ans = getch();
	switch (ans)
	{
	case '1':
		system("cls");
		startQuest();
		break;
	case '2':
		system("cls");
		file.accessToFile("Rule.txt");
		//system("pause");
		menu();
		break;
	case '3':
		exit(0);
		break;
	default:
		cout << "Error of choose ! For choose enter 1,2 or 3 ." << endl;
		system("cls");
		menu();
		break;
	}
}