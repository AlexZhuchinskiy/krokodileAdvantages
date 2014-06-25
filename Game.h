#pragma once
#include "WorkWithFile.h"
#include <conio.h>

class Game
{
	WorkWithFile file;
public:
	void goHome();
	void comeToSwimmingPool();
	void heatKrocodile(int quantity);
	void giveMealKrocodile();
	void rollBack();
	void startQuest();
	void menu();
	Game(void);
	~Game(void);
};

