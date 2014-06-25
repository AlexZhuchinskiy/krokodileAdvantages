#include "WorkWithFile.h"


WorkWithFile::WorkWithFile(void)
{
}


WorkWithFile::~WorkWithFile(void)
{
}

void WorkWithFile :: accessToFile(string name){
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

void WorkWithFile :: createFileAndWriteMess(string mess){
	ofstream file("info.txt" , ios::out);
	file << mess.c_str();
}