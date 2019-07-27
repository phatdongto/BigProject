#include "SplashStage.h"
#include "Console.h"

void SplashStage::drawStage(){
	system("cls");
	for (int i = 0; i < 2* CONSOLE_HEIGHT; i++) {
		system("cls");
		Console::setTextColor(10);
	/*	Console::printxy("+++++++++++++++", CONSOLE_WIDTH/2 -15, i++);
		Console::printxy("--------------", -CONSOLE_WIDTH/2 , CONSOLE_HEIGHT - i);
		Console::printxy("+++++++++++++++", -CONSOLE_WIDTH + i, CONSOLE_HEIGHT + i);*/
	}
	for (int i = 0; i < CONSOLE_WIDTH / 2; i++) {
		cout << "=" << endl;
	}
	for (int i = CONSOLE_WIDTH; i < CONSOLE_WIDTH / 2; i--) {
		cout << "=" << endl;
	}
	system("cls");
	Console::printxy("System Manager", CONSOLE_WIDTH / 2 - 5, CONSOLE_HEIGHT/2);
	Sleep(200);
	StageManager::changeStage("mainMenu");
}
