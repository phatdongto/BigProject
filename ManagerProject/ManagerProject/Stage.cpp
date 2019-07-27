#include "Stage.h"

Stage* StageManager::currentStage;
map<string, Stage*> StageManager::stageList;
string StageManager::inputString = "";
int StageManager::prekey = 0;

Stage::Stage(string name) {
	StageManager::stageList[name] = this;
}

void StageManager::changeStage(string name) {
	currentStage = stageList[name]; 
	currentStage->reset();
	currentStage->drawStage();
}

void StageManager::drawStage()
{
	currentStage->drawStage();
}

int StageManager::update()
{
	int key = getInput();

	return currentStage->input(key);
}

int StageManager::getInput()
{
	int key = 0;
	if (_kbhit()) {
		key = _getch();
		//cout << key << endl;

		if (key != 224) {
			if (printable(key) && prekey != 224) {
				inputString += (char)key;
				if (key >= 97 && key <= 122) key -= 32;
				drawStage();
			}
			if (key == KEY_BACKSPACE && inputString.size() > 0) {
				inputString.pop_back();
				drawStage();
			}
			else if (key == KEY_DEL && inputString.size() > 0) {
				clearString();
				drawStage();
			}

		}
		int temp = key;
		if (prekey != 224 && key != KEY_ENTER) key = 0;
		prekey = temp;
	}
	return key;
}

void StageManager::clearString()
{
	inputString = "";
}

bool StageManager::printable(int key)
{
	if (key >= 32 && key <= 126) return true;
	return false;
}
