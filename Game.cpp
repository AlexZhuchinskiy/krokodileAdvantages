#include "Game.h"


Game::Game(void)
{
	
}


Game::~Game(void)
{
	
}

void Game :: startQuest(){
	system("cls");
	file.accessToFile("mainScene.txt");
	char ans = getch();
	switch(ans){
	case '1':
		goHome();
		break;
	case '2' :
		comeToSwimmingPool();
		break;
	default :
		cout << "Error of choose ! For choose enter 1 or 2 ." << endl;
		startQuest();
		break;
	}
}

void Game :: goHome(){
	system("cls");
	file.accessToFile("goHome.txt");
	char ans = getch();
	switch(ans){
	case '1' :
		system("cls");
		cout << "Right choosee +5 to karma !!!" << endl;
		startQuest();
		break;
	
	case '2':
		system("cls");
		cout << "Bye !!!" << endl;
		exit(0);
		break;
	default :
		cout << "Error of choose ! For choose enter 1 or 2 ." << endl;
		startQuest();
		break;
	}
}

void Game :: comeToSwimmingPool(){
	system("cls");
	file.accessToFile("goToSwimmingPool.txt");
	
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