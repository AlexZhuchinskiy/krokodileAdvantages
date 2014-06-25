#pragma once
#include <io.h>
#include <fstream>
#include <iostream>
using namespace std;


class WorkWithFile
{
	
public:
	void createFileAndWriteMess(string mess);
	void accessToFile(char *name);
	WorkWithFile(void);
	~WorkWithFile(void);
};

