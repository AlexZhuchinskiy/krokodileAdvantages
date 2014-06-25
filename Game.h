#pragma once
#include "WorkWithFile.h"
#include <conio.h>
#include <string>

class Game
{
	int countForFile;
	string fileName[4];
	WorkWithFile file;
public:
	void died();
	void win();
	void changeLevel();

	void quest();
	void menu();
	Game(void);
	~Game(void);
};

