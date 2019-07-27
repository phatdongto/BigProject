#include "OptionMenu.h"

OptionMenu::OptionMenu(string name, string menu) : MenuStage(name, menu)
{
}




int OptionMenu::input(int key)
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
			StageManager::changeStage("shopMenu");
		}
		else if (choice == 2) {

		}
		else if (choice == 3) {

		}
		else if (choice == 4) {
			StageManager::changeStage("mainMenu");
		}
	}
	return 0;
}
