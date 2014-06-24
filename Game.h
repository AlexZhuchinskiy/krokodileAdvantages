#pragma once
#include "WorkWithFile.h"

class Game
{
	WorkWithFile file;
public:
	void goHome();
	void comeToSwimmingPool();
	void heatKrocodile(int quantity);
	void giveMealKrocodile();
	void rollBack();
	void startLabQuest();
	Game(void);
	~Game(void);
};

