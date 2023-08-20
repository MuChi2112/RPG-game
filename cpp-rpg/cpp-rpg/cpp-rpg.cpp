#include <iostream>
#include "warriorWeaponStore.h"
#include "characterFactory.h"

int playerNum = 0;
int turns = 0;
int playerTurns = 1;

CharacterLib::Character* createPlayer() {
	playerNum++;
	std::cout << "玩家" << playerNum << "請選擇職業" << std::endl;
	std::cout << "1. 戰士 2. 法師 3. 妖怪" << std::endl;

	std::string characterNum = "";
	std::cin >> characterNum;

	// 需要寫例外條件判斷
	while (characterNum != "1" && characterNum != "2" && characterNum != "3") {
		std::cout << "請選擇數字1~3" << std::endl;
		std::cin >> characterNum;
	}

	CharacterLib::Character* player = CharacterFactory::createChacracter(std::stoi(characterNum));

	player->SetMoney(2000);

	return player;
}

void mainStep(CharacterLib::Character* playerA, CharacterLib::Character* playerB) {
	(playerTurns % 2 != 0) ? std::cout << "玩家 1 的" : std::cout << "玩家 2 的";
	std::cout << "第" << turns << "回合" << std::endl;
	std::cout << "1. 攻擊" << endl << "2. 買武器" << endl << "3. 買盔甲" << endl << "4. 治療" << std::endl;

	std::string chooseNum = "";
	std::cin >> chooseNum;

	while (chooseNum != "1" && chooseNum != "2" && chooseNum != "3") {
		std::cout << "請選擇行動" << std::endl;
		std::cin >> chooseNum;
	}

	if (chooseNum == "1") {
		playerA->TakeAttack(playerB);
	}
	else if (chooseNum == "2") {
	}
	else if (chooseNum == "3") {
	}
	else if (chooseNum == "4") {
	}

	playerTurns++;
}

int main() {
	std::cout << "遊戲開始" << std::endl;

	CharacterLib::Character* player1 = createPlayer();
	CharacterLib::Character* player2 = createPlayer();

	while (player1->GetHealth() != 0 && player2->GetHealth() != 0) {
		turns++;

		mainStep(player1, player2);
		mainStep(player2, player1);
	}

	if (player1->GetHealth() != 0) {
		std::cout << "'Player1 wins";
	}
	else {
		std::cout << "'Player2 wins";
	}
}