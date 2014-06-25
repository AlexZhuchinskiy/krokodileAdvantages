#include "WorkWithFile.h"


WorkWithFile::WorkWithFile(void)
{
}


WorkWithFile::~WorkWithFile(void)
{
}

void WorkWithFile :: accessToFile(char *name){
	char buff[100];
	ifstream fileAccess(name);
	if(!fileAccess.is_open()){
		cout << "File ERROR!" << endl;
	}else{
		while(!fileAccess.eof()){
			fileAccess.getline(buff,100);
			cout << buff << endl;
		}
	}
	fileAccess.close();
	system("pause");
}
