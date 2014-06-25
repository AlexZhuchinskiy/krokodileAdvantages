#pragma once
#include "WorkWithFile.h"
#include <conio.h>
#include <string>

class Game
{
	WorkWithFile file;
	bool isMessageLeave;	
	bool eatWhichYouTake;
public:
	void goHome();
	void comeToSwimmingPool();
	void hitKrocodile(int quantity);
	void goToForest();
	bool isPersonLiveAfterHit(int quantity);	
	void seeInRefrigarator();
	void reactionCrocodeleOnEat(bool eat);
	void startQuest();
	void menu();
	Game(void);
	~Game(void);
};

