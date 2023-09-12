#include "character.h "
#include <iostream>
#include <random>

using namespace CharacterLib;
int randomInt(int start, int end) {
	// 使用隨機設備來種子生成器
	std::random_device rd;

	// 使用 Mersenne Twister 引擎
	std::mt19937 eng(rd());

	// 定義範圍，例如從 1 到 6
	std::uniform_int_distribution<> distr(start, end);

	// 產生隨機數字
	int random_number = distr(eng);

	return random_number;
}

void Character::SetName(std::string name) {
	mName = name;
}

std::string Character::GetName() {
	return mName;
}
int Character::GetHealth() {
	return mHealth;
}

int Character::GetATK() {
	return mATK;
}

int Character::GetDEF() {
	return mDEF;
}

int Character::GetMoney() {
	return mMoney;
}

WeaponLib::Weapon Character::GetWeapon() {
	return mWeapon;
}
ArmorLib::Armor Character::GetArmor() {
	return mArmor;
}
void Character::SetHealth(int hp) {
	mHealth = hp;
}
void Character::SetMoney(int money) {
	mMoney = money;
}
void Character::SetWeapon(WeaponLib::Weapon weapon) {
	mWeapon = weapon;
}
void Character::SetArmor(ArmorLib::Armor armor) {
	mArmor = armor;
}
void Character::TakeAttack(Character* opponent) {
	int randInt = randomInt(0, 5);
	if (randInt == 5) {
		cout << "使出了強力一擊" << endl;
	}
	else if (randInt == 0) {
		cout << "對手躲過了攻擊" << endl;
	}

	int damage = (mATK + mWeapon.GetATK()) * randInt - opponent->GetDEF();
	if (damage < 0) return;

	cout << "造成對手" << damage << "點的傷害" << endl;
	int opponentHp = opponent->GetHealth() - damage;
	opponent->SetHealth((opponentHp < 0) ? 0 : opponentHp);


}

void Character::Show() {
		
	cout << "玩家資訊" << endl;
	cout << "玩家職業: " << mName<<endl;
	cout << "生命值: " << mHealth << endl;
	cout << "攻擊力: " << mATK << endl;
	cout << "防禦力: " << mDEF << endl;
	cout << "錢: " << mMoney << endl;



	if (mWeapon.GetName().empty()) {
		cout << "身上沒有戴武器" << endl;
	}
	else {
		cout << "武器: " << mWeapon.GetName()<<endl;
	}

	if (mArmor.GetName().empty()) {
		cout << "身上沒有戴防具" << endl;
	}
	else {
		cout << "防具: " << mArmor.GetName() << endl;
	}

}
std::string Character::getInformation() {
	std::string out;

	out += "玩家資訊\n玩家職業: " + mName + "\n" +
		"生命值: " + to_string(mHealth) + "\n攻擊力: " + to_string(mATK) + "\n防禦力: " +
		to_string(mDEF) + "\n錢: " + to_string(mMoney) + "\n";

	if (mWeapon.GetName().empty()) {
		out += "身上沒有戴武器\n";
	}
	else {
		out += "武器: " + mWeapon.GetName() + "\n";
	}

	if (mArmor.GetName().empty()) {
		out += "身上沒有戴防具\n";
	}
	else {
		out += "防具: " + mArmor.GetName() + "\n";
	}
	return out;
}

bool Character::BuyWeapon(WeaponStore* store, std::function<std::string()> getInformation, std::function<std::string(std::string)> askQuestion, bool playWithAI) {

	if (mMoney < 500) {
		return false;
	}

	store->Show();

	int number = 0;
	std::cout << "請輸入數字1~4, 如果要退出購買的話輸入9" << std::endl;

	if (mPlayer == "player2" && playWithAI) {
		auto info = getInformation();
		info += "幫我選擇接下來的武器";
		info += store->GetInfo();
		number = stoi(askQuestion(info));
		cout << "AI選擇的武器是" << number << endl;
	}
	else {
		std::cin >> number;
	}

	bool buy = false;
	WeaponLib::Weapon newWeapon;
	while (buy == false) {
		while (number != 1 && number != 2 && number != 3 && number != 4 && number!=9) {
			
			if (mPlayer == "player2" && playWithAI) {
				auto info = getInformation();
				info += "幫我選擇接下來的武器";
				info += store->GetInfo();
				number = stoi(askQuestion(info));
				cout << "AI選擇的武器是" << number << endl;
			}
			else {
				std::cout << "請輸入數字1~4, 如果要退出購買的話輸入9" << std::endl;
				std::cin >> number;
			}
		}

		if (number == 9) {
			return false;
		}

		newWeapon = *(store->CreateWeapon(number));
		int curMoney = this->GetMoney();
		int weaponMoney = newWeapon.GetPrice();
		curMoney = curMoney - weaponMoney;
		//cout<<"This => " << mWeapon.GetRank() << " " << newWeapon.GetRank() << endl;
		if (mWeapon.GetRank() == newWeapon.GetRank()) {
			number = 0;
			std::cout << "該武器已經裝備" << std::endl;

			auto info = getInformation();
			info += "該武器已經裝備";
		}
		else if (curMoney < 0) {
			number = 0;
			std::cout << "您沒有錢了" << std::endl;
		}
		else {
			this->SetWeapon(newWeapon);
			this->SetMoney(curMoney);
			buy = true;
		}
	}
	return true;
}
bool Character::BuyArmor(ArmorStore* store, std::function<std::string()> getInformation, std::function<std::string(std::string)> askQuestion, bool playWithAI){

	if (mMoney < 500) {
		return false;
	}

	store->Show();

	int number = 0;
	std::cout << "請輸入數字1~4, 如果要退出購買的話輸入9" << std::endl;

	if (mPlayer == "player2" && playWithAI) {
		auto info = getInformation();
		info += "幫我選擇接下來防器";
		info += store->GetInfo();
		number = stoi(askQuestion(info));
		cout << "AI選擇的防具是" << number << endl;
	}
	else {
		std::cin >> number;
	}


	bool buy = false;
	ArmorLib::Armor newArmor;
	while (buy == false) {
		while (number != 1 && number != 2 && number != 3 && number != 4 && number != 9) {
			if (mPlayer == "player2" && playWithAI) {
				auto info = getInformation();
				info += "幫我選擇接下來的防具";
				info += store->GetInfo();
				number = stoi(askQuestion(info));
				cout << "AI選擇的防具是" << number << endl;
			}
			else {
				std::cout << "請輸入數字1~4, 如果要退出購買的話輸入9" << std::endl;
				std::cin >> number;
			}
		}

		if (number == 9) {
			return false;
		}

		newArmor = *(store->CreateArmor(number));
		int curMoney = this->GetMoney();
		int weaponMoney = newArmor.GetPrice();
		curMoney = curMoney - weaponMoney;
		if (mWeapon.GetRank() == newArmor.GetRank()) {
			number = 0;
			std::cout << "該防具已經裝備" << std::endl;
		}
		else if (curMoney < 0) {
			number = 0;
			std::cout << "您沒有錢了" << std::endl;
		}
		else {
			this->SetArmor(newArmor);
			this->SetMoney(curMoney);
			buy = true;
		}
	}
	return true;
}
void Character::makeMoney() {
	int moneyOwn = GetMoney();
	float moneyGive = 0.0;

	moneyGive = (float)moneyOwn / 10000;
	moneyGive = 1 - moneyGive;
	moneyGive *= 1500;
	moneyGive += moneyOwn;

	this->SetMoney(moneyGive);

	std::cout << "這回合賺了" << (int)(moneyGive - moneyOwn) << "元" << endl;
	std::cout << "現在擁有" << int(moneyGive) << "元" << endl;
}
void Character::Heal() {
	int heal = 100 * randomInt(1, 5);
	int chaHP = this->GetHealth() + heal;
	this->SetHealth(chaHP);
	std::cout << "回復了" << heal << ",現在血量為: " << chaHP << endl;
}

void Character::setPlayer(std::string player){
	mPlayer = player;
}


std::string Character::getPlayer() {
	return mPlayer;
}