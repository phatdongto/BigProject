#include "MenuStage.h"

MenuStage::MenuStage(string name, string str) : Stage(name) {
	menu = str;
	for (int i = 0; i < menu.size(); i++) {
		if (menu[i] == ',') {
			count++;
		}
	}

	int start = 0;
	for (int i = 0; i < menu.size(); i++) {
		if (menu[i] == ',' || i==menu.size()-1) {
			if (i == menu.size()-1) i++;
			list.push_back(menu.substr(start, i - start));
			start = i + 1;
		}
	}

}
#
void MenuStage::drawStage()
{
	system("cls");
	vector<string>::iterator p = list.begin();
	int i = 1;
	while (p != list.end()) {
		if (choice == i) Console::setTextColor(COLOR_YELLOW);
		Console::printxy(*p, CONSOLE_WIDTH/2, i + 5);
		Console::setTextColor(COLOR_WHITE);
		p++;
		i++;
	}

	cout << endl << StageManager::inputString;
}

void MenuStage::reset()
{
	system("cls");
	Console::setTextColor(COLOR_WHITE);
	choice = 1;
}
