#include <iostream>
#include "warriorWeaponStore.h"
#include "characterFactory.h"


int main() {


	std::cout << "遊戲開始" << std::endl;
	std::cout << "玩家一請選擇職業" << std::endl;
	std::cout << "1. 戰士 2. 法師 3. 妖怪" << std::endl;
	
	std::string characterNum = "";
	std::cin >> characterNum;

	// 需要寫例外條件判斷
	while (characterNum != "1" && characterNum != "2" && characterNum != "3") {
		std::cout << "請選擇數字1~3" << std::endl;
		std::cin >> characterNum;
	}

	CharacterFactory::createChacracter(std::stoi(characterNum));

}

