#pragma once
#include <io.h>
#include <fstream>
#include <iostream>
using namespace std;


class WorkWithFile
{
	
public:
	void createFileAndWriteMess(string mess);
	void accessToFile(string name);
	WorkWithFile(void);
	~WorkWithFile(void);
};

