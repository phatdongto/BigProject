#include "SplashStage.h"
#include "MainMenu.h"
#include "OptionMenu.h"
#include "ShoppingMenu.h"
#include "Console.h"

int main()  {
	Console::setConsoleSize(CONSOLE_WIDTH, CONSOLE_HEIGHT);
	SplashStage splashStage("splashStage");	//tao splash
	MainMenu mainMenu("mainMenu", "Option,Splash,Exit");
	OptionMenu optionMenu("optionMenu", "Shop,Option 2,Option 3,Back");
	ShoppingMenu shop("shopMenu");

	StageManager::changeStage("splashStage");

	while (1) {
		int i = StageManager::update();
		if (i == -1) break;
	}

	return 0;
}