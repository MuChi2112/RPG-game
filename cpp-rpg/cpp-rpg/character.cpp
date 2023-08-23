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
void Character::Treatment() {
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
bool Character::BuyWeapon(WeaponStore* store) {

	store->Show();

	int number = 0;
	std::cout << "請輸入數字1~4, 如果要退出購買的話輸入9" << std::endl;
	std::cin >> number;
	bool buy = false;
	WeaponLib::Weapon newWeapon;
	while (buy == false) {
		while (number != 1 && number != 2 && number != 3 && number != 4 && number!=9) {
			std::cout << "請輸入數字1~4, 如果要退出購買的話輸入9"<<std::endl;
			std::cin >> number;
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
bool Character::BuyArmor(ArmorStore* store){

	store->Show();

	int number = 0;
	std::cout << "請輸入數字1~4, 如果要退出購買的話輸入9" << std::endl;
	std::cin >> number;
	bool buy = false;
	ArmorLib::Armor newArmor;
	while (buy == false) {
		while (number != 1 && number != 2 && number != 3 && number != 4 && number != 9) {
			std::cout << "請輸入數字1~4, 如果要退出購買的話輸入9" << std::endl;
			std::cin >> number;
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
void Character::Heal() {
	int heal = 100 * randomInt(1, 5);
	int chaHP = this->GetHealth() + heal;
	this->SetHealth(chaHP);
}