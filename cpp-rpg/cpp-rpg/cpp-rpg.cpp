#include <iostream>
#include "warriorWeaponStore.h"
#include "wizardWeaponStore.h"
#include "monsterWeaponStore.h"
#include "warriorArmorStore.h"
#include "wizardArmorStore.h"
#include "monsterArmorStore.h"
#include "callOpenAiAPI.h"
#include "characterFactory.h"

int playerNum = 0;
int turns = 0;
int playerTurns = 1;
bool playWithAI = false;

WeaponStore * warriorWeaponStore = new WarriorWeaponStore();
WeaponStore* wizardWeaponStore = new WizardWeaponStore();
WeaponStore* monsterWeaponStore = new MonsterWeaponStore();

ArmorStore* warriorArmorStore = new WarriorArmorStore();
ArmorStore* wizardArmorStore = new WizardArmorStore();
ArmorStore* monsterArmorStore = new MonsterArmorStore();

CallOpenAiAPI* callOpenAI = new CallOpenAiAPI();


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
	
	player->SetMoney(200);

	return player;
}

std::string getInformation(CharacterLib::Character* playerA, CharacterLib::Character* playerB) {
	std::string out;
	out+="我方資訊\n"+ playerA->getInformation()+"敵方資訊\n"+ playerB->getInformation();
	return out;
}

void mainStep(CharacterLib::Character* playerA, CharacterLib::Character* playerB) {
	system("cls");

	(playerTurns % 2 != 0) ? std::cout << "玩家 1 的" : std::cout << "玩家 2 的";
	std::cout << "第" << turns << "回合" << std::endl;
	
	playerA->makeMoney();

	auto getInfo = [&]() {
		return getInformation(playerA, playerB);
	};
	auto askQues = [&](string info) {
		return callOpenAI->askQuestion(info);
	};
	
	bool isChoise = false;
	while (isChoise == false) {
		std::string chooseNum = "";
		if (playerA->getPlayer() == "player1" || (playerA->getPlayer() == "player2" && playWithAI == false)) {
			std::cout << "1. 攻擊" << endl << "2. 買武器" << endl << "3. 買盔甲" << endl << "4. 治療" << endl << "5. 資訊" << std::endl;
			std::cin >> chooseNum;
		}
		else {
			std::cout << "1. 攻擊 "  << "2. 買武器 "  << "3. 買盔甲 " << "4. 治療 "  << std::endl;
			cout << "AI 現在在思考下一步的策略" << endl;
		}

		if (playerA->getPlayer() == "player2" && playWithAI == true ) {
			auto info = getInformation(playerA, playerB);
			info += "幫我選擇接下來的行動，給我數字1~4\n";
			info += "1. 攻擊 2. 買武器 3. 買盔甲 4. 治療 5. 資訊";

			chooseNum = callOpenAI->askQuestion(info);
			cout << "AI選擇的策略是" << chooseNum << endl;
		}
		else {
			while (chooseNum != "1" && chooseNum != "2" && chooseNum != "3" && chooseNum != "4" && chooseNum != "5") {
				std::cout << "請選擇行動" << std::endl;
				std::cin >> chooseNum;
			}
		}
		
		if (chooseNum == "1") {
			isChoise = true;
			playerA->TakeAttack(playerB);
		}
		else if (chooseNum == "2") {			
		

			if (playerA->GetName() == "Warrior") {                      
				isChoise = playerA->BuyWeapon(warriorWeaponStore, getInfo, askQues, playWithAI);
			}
			else if (playerA->GetName() == "Wizard") {
				isChoise = playerA->BuyWeapon(wizardWeaponStore, getInfo, askQues, playWithAI);
			}
			else {
				isChoise = playerA->BuyWeapon(monsterWeaponStore, getInfo, askQues, playWithAI);
			}
		}
		else if (chooseNum == "3") {	
			if (playerA->GetName() == "Warrior") {
				isChoise = playerA->BuyArmor(warriorArmorStore,  getInfo, askQues, playWithAI);
			}
			else if (playerA->GetName() == "Wizard") {
				isChoise = playerA->BuyArmor(wizardArmorStore, getInfo, askQues, playWithAI);
			}
			else {
				isChoise = playerA->BuyArmor(monsterArmorStore, getInfo, askQues, playWithAI);
			}
		}
		else if (chooseNum == "4") {
			isChoise = true;
			playerA->Heal();
		}

		else if (chooseNum == "5") {
			cout << "我方資訊" << endl;
			playerA->Show();
			cout << "敵方資訊" << endl;
			playerB->Show();
		}
	}

	
	playerTurns++;
}

int main() {

	std::cout << "遊戲開始" << std::endl;
	std::cout << "您要跟AI玩遊戲嗎?要跟AI對戰的話請輸入1, 其餘則是雙人對戰" << std::endl;
	string aiStr = "";
	cin >> aiStr;
	if (aiStr == "1") {
		playWithAI = true;
	}


	CharacterLib::Character* player1 = createPlayer();
	CharacterLib::Character* player2 = createPlayer();

	player1->setPlayer("player1");
	player2->setPlayer("player2");

	while (player1->GetHealth() != 0 && player2->GetHealth() != 0) {
		turns++;

		mainStep(player1, player2);
		if (player1->GetHealth() <= 0 || player2->GetHealth() <= 0) {
			break;
		}
		system("pause");


		mainStep(player2, player1);
		system("pause");
	}

	if (player1->GetHealth() != 0) {
		std::cout << "Player1 wins";
	}
	else {
		std::cout << "Player2 wins";
	}
}