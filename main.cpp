#include "Game.h"
#include "WorkWithFile.h"

int main(){
	WorkWithFile *f = new WorkWithFile();
	f->accessToFile("mainScene.txt");
	return EXIT_SUCCESS;
}