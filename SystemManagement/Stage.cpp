#include "Stage.h"

Stage* StageManager::currentStage;
map<string, Stage*> StageManager::stageList;

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
		if (key >= 97 && key <= 122) key -= 32;
		//cout << key << endl;
	}
	return key;
}
