#include "Game.h"


Game::Game(void)
{
	countForFile = 0;
	fileName[0] = "mainScene.txt";
	fileName[1] = "goToSwimmingPool.txt";
	fileName[2] = "Refrigarator.txt";
	fileName[3] = "goToForest.txt";
}


Game::~Game(void)
{
}

void Game :: quest(){
	system("cls");
	file.accessToFile(fileName[countForFile]);
	char ans = getch();
	switch(ans){
	case '1':
		changeLevel();
		break;
	case '2' :
		died();
		break;
	case '3' :
		win();
		break;
	default :
		cout << "Error of choose !" << endl;
		quest();
		break;
	}
}

void Game :: changeLevel(){
	if(countForFile <= 3){
		countForFile++;
		quest();
	}else{
		countForFile = 0;
		quest();
	}
}


void Game :: win(){
	cout << "You WIN ! My CONGRETULATION !" << endl;
	system("pause");
	exit(0);
}

void Game :: died(){
	cout << "Sorry you DIED ! TRY AGAIN !" << endl;
	system("pause");
	exit(0);
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
		quest();
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
