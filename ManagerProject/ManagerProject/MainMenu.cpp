#include "MainMenu.h"

MainMenu::MainMenu(string name, string menu) : MenuStage(name,  menu) {
}

int MainMenu::input(int key)
{
	if (key == KEY_UP) {
		choice--;
		choice = choice == 0 ? count : choice;
		StageManager::drawStage();
	}
	else if (key == KEY_DOWN) {
		choice++;
		choice = choice > count ? 1 : choice;
		StageManager::drawStage();
	}
	else if (key == KEY_ENTER) {
		if (choice == 1) {
			StageManager::changeStage("optionMenu");
		}
		else if (choice == 2) {
			StageManager::changeStage("splashStage");
		}
		else if (choice == 3) {
			return -1;
		}
	}
	return 0;
}
