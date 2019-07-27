#include "SplashStage.h"
#include "Console.h"
#include <fstream>


SplashStage::SplashStage(string name) : Stage(name)
{
	string line;
	ifstream file("splash.cfg");
	if (file.is_open()) {
		while (getline(file, line)) {
			splashData[lines] = line;
			lines++;

		}
		file.close();
	}
}

void SplashStage::drawStage(){
	system("cls");
	int maxLength = 0;
	for (int i = 0; i < lines; i++)
		if (splashData[i].size() > maxLength) maxLength = splashData[i].size();

	int		widthOffset = (CONSOLE_WIDTH - maxLength + 1) / 2,
		heightOffset = (CONSOLE_HEIGHT - lines) / 2,
		offset = 0;

	for (int i = 0; i < lines; i++) {
		system("cls");
		Console::printxy(splashData[i], widthOffset, heightOffset + i);
		Sleep(100);
	}

	system("cls");
	for (int i = 0; i < lines; i++) {
		Console::printxy(splashData[i], widthOffset, heightOffset + i);
		Sleep(100);
	}

	while (heightOffset - offset > 5) {
		system("cls");
		for (int i = 0; i < lines; i++)
			Console::printxy(splashData[i], widthOffset, heightOffset - offset + i);

		Sleep(100);
		offset++;
	}
	system("cls");
	Console::printxy("System Manager", CONSOLE_WIDTH / 2 - 5, CONSOLE_HEIGHT/2);
	Sleep(200);
	StageManager::changeStage("mainMenu");
}
