#include "Game.h"


Game::Game(void)
{
	isMessageLeave = false;
	eatWhichYouTake = false;
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
	char ans = getch();
	switch(ans){
	case '1' :
		system("cls");
		seeInRefrigarator();
		break;
	case '2':
		system("cls");
		int quantity;
		cout << "Enter quantity of hit : " ;
		cin >> quantity;
		system("cls");
		hitKrocodile(quantity);
		break;
	case '3' : 
		system("cls");
		goToForest();
		break;
	default :
		cout << "Error of choose ! For choose enter 1,2 or 3 ." << endl;
		comeToSwimmingPool();
		break;
	}
}

void Game :: hitKrocodile(int quantity){
	system("cls");
	if (isPersonLiveAfterHit(quantity)){
		cout << "Right choose ! Crocodile see it and decided do not kill you ! You are free ! WIN !!! ";
	}else{
		cout << "Ohhhhhhhh.......Crocodile kill you ! Lose !!!";
	}
	system("pause");
	menu();
}

bool Game :: isPersonLiveAfterHit(int quantity){
	if(quantity){
		return false;
	}return true;
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

void Game :: goToForest(){
	if(!isMessageLeave){
		system("cls");
		string mess;
		file.accessToFile("goToForest.txt");
		getline(cin,mess);
		system("cls");
		file.createFileAndWriteMess(mess);
		file.accessToFile("RollbackAfterLeaveMessage.txt");
		char ans = getch();
		switch (ans)
		{
		case '1':
			isMessageLeave = true;
			comeToSwimmingPool();
			break;
		case '2':
			exit(0);
			break;
		default:
			break;
		}
	}else{
		system("cls");
		cout << "You wrote on stone some message !!!" << endl;
		system("pause");
		comeToSwimmingPool();
	}

}

void Game :: seeInRefrigarator(){
	system("cls");
	file.accessToFile("Refrigarator.txt");
	char ans = getch();
	switch(ans){
		case '1' :
		eatWhichYouTake = true;
	break;
		case '2':
		eatWhichYouTake = false;
	break;
	default :
		cout << "Error of choose ! For choose enter 1 or 2 ." << endl;
		seeInRefrigarator();
	break;
	}
		cout << "Okay ! You make your decision ! Let to see what about that think crocodile !" ;
		reactionCrocodeleOnEat(eatWhichYouTake);
}

void Game :: reactionCrocodeleOnEat(bool eat){
	system("cls");
	if(eat){
		cout << "Crocodile was hungry and you decided eat all food alone !!! Crocodeile killed you !!! You LOSE ! ";
	}else{
		cout << "You soo generous ! Crocodile is your friend.You win!";
	}
	system("pause");
	menu();
}