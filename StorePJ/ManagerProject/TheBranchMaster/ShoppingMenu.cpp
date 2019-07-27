#include "ShoppingMenu.h"
#include "VectorInteract.h"
ShoppingMenu::ShoppingMenu(string name) : Stage(name) { //vector<stroerageitem VB>
	ManageVector x;
	vector<StorageItem> VBItems;
	x.ImportItemsToVectorA(VBItems);
	for (int i = 0; i < VBItems.size(); i++) {
		list.push_back(VBItems[i].Name());
	}
	list.push_back("Back");
	
	count = list.size();


	/*int start = 0;
	for (int i = 0; i < menu.size(); i++) {
		if (menu[i] == ',' || i == menu.size() - 1) {
			if (i == menu.size() - 1) i++;
			list.push_back(menu.substr(start, i - start));
			start = i + 1;
		}
	}*/
	// Cai dat cho menu, class con, list bla bla

	//goi ham load item bla bla doc vao list
}
#
void ShoppingMenu::drawStage()
{
	// ve~ lisst item ra
	vector<string>::iterator p = list.begin();
	int i = 1, n = ceil(list.size()/3);
	while (p != list.end()) {
		if (choice == i) Console::setTextColor(COLOR_YELLOW);  // set mau hay lam gi voi cai item duoc chon


		Console::printxy(*p, 5 + 20*((i-1)/n), (i-1)%n + 5);			// code ve chinh

		Console::setTextColor(COLOR_WHITE);			// reset lai mau hay bla bla gi do
		p++;
		i++;
	}
}

int ShoppingMenu::input(int key)
{
	int n = ceil(list.size() / 3);
	// xu ly key
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
	else if (key == KEY_RIGHT) {
		choice += n;
		choice = choice > count ? choice - count : choice;
		StageManager::drawStage();
	}
	else if (key == KEY_LEFT) {
		choice -= n;
		choice = choice < 1 ? choice + count : choice;
		StageManager::drawStage();
	}
	else if (key == KEY_ENTER) {
		ManageVector x;
		vector<StorageItem> VBItems;
		x.ImportItemsToVectorA(VBItems);
		/*if (choice == 1) {
			StageManager::changeStage("shopMenu");
		}
		else if (choice == 2) {

		}
		else if (choice == 3) {

		}
		else if (choice == 4) {
			StageManager::changeStage("mainMenu");
		}*/
		/*for (int i = 0; i < VBItems.size(); i++) {
			if (choice == i+1) {
				StageManager::drawStage();
				cout << endl;
				VBItems[i].ShowInfor();
			}
		}*/
		if (choice-1 < VBItems.size()) {
			StageManager::drawStage();
			VBItems[choice-1].ShowInfor(CONSOLE_WIDTH - 25, 8);
		}
		if (choice == VBItems.size() + 1) StageManager::changeStage("mainMenu");
	}

	return 0;
}
