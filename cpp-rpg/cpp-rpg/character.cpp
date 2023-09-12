#include "character.h "
#include <iostream>
#include <random>

using namespace CharacterLib;
int randomInt(int start, int end) {
	// �ϥ��H���]�ƨӺؤl�ͦ���
	std::random_device rd;

	// �ϥ� Mersenne Twister ����
	std::mt19937 eng(rd());

	// �w�q�d��A�Ҧp�q 1 �� 6
	std::uniform_int_distribution<> distr(start, end);

	// �����H���Ʀr
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
		cout << "�ϥX�F�j�O�@��" << endl;
	}
	else if (randInt == 0) {
		cout << "�����L�F����" << endl;
	}

	int damage = (mATK + mWeapon.GetATK()) * randInt - opponent->GetDEF();
	if (damage < 0) return;

	cout << "�y�����" << damage << "�I���ˮ`" << endl;
	int opponentHp = opponent->GetHealth() - damage;
	opponent->SetHealth((opponentHp < 0) ? 0 : opponentHp);


}

void Character::Show() {
		
	cout << "���a��T" << endl;
	cout << "���a¾�~: " << mName<<endl;
	cout << "�ͩR��: " << mHealth << endl;
	cout << "�����O: " << mATK << endl;
	cout << "���m�O: " << mDEF << endl;
	cout << "��: " << mMoney << endl;



	if (mWeapon.GetName().empty()) {
		cout << "���W�S�����Z��" << endl;
	}
	else {
		cout << "�Z��: " << mWeapon.GetName()<<endl;
	}

	if (mArmor.GetName().empty()) {
		cout << "���W�S��������" << endl;
	}
	else {
		cout << "����: " << mArmor.GetName() << endl;
	}

}
std::string Character::getInformation() {
	std::string out;

	out += "���a��T\n���a¾�~: " + mName + "\n" +
		"�ͩR��: " + to_string(mHealth) + "\n�����O: " + to_string(mATK) + "\n���m�O: " +
		to_string(mDEF) + "\n��: " + to_string(mMoney) + "\n";

	if (mWeapon.GetName().empty()) {
		out += "���W�S�����Z��\n";
	}
	else {
		out += "�Z��: " + mWeapon.GetName() + "\n";
	}

	if (mArmor.GetName().empty()) {
		out += "���W�S��������\n";
	}
	else {
		out += "����: " + mArmor.GetName() + "\n";
	}
	return out;
}

bool Character::BuyWeapon(WeaponStore* store, std::function<std::string()> getInformation, std::function<std::string(std::string)> askQuestion, bool playWithAI) {

	if (mMoney < 500) {
		return false;
	}

	store->Show();

	int number = 0;
	std::cout << "�п�J�Ʀr1~4, �p�G�n�h�X�ʶR���ܿ�J9" << std::endl;

	if (mPlayer == "player2" && playWithAI) {
		auto info = getInformation();
		info += "���ڿ�ܱ��U�Ӫ��Z��";
		info += store->GetInfo();
		number = stoi(askQuestion(info));
		cout << "AI��ܪ��Z���O" << number << endl;
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
				info += "���ڿ�ܱ��U�Ӫ��Z��";
				info += store->GetInfo();
				number = stoi(askQuestion(info));
				cout << "AI��ܪ��Z���O" << number << endl;
			}
			else {
				std::cout << "�п�J�Ʀr1~4, �p�G�n�h�X�ʶR���ܿ�J9" << std::endl;
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
			std::cout << "�ӪZ���w�g�˳�" << std::endl;

			auto info = getInformation();
			info += "�ӪZ���w�g�˳�";
		}
		else if (curMoney < 0) {
			number = 0;
			std::cout << "�z�S�����F" << std::endl;
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
	std::cout << "�п�J�Ʀr1~4, �p�G�n�h�X�ʶR���ܿ�J9" << std::endl;

	if (mPlayer == "player2" && playWithAI) {
		auto info = getInformation();
		info += "���ڿ�ܱ��U�Ө���";
		info += store->GetInfo();
		number = stoi(askQuestion(info));
		cout << "AI��ܪ�����O" << number << endl;
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
				info += "���ڿ�ܱ��U�Ӫ�����";
				info += store->GetInfo();
				number = stoi(askQuestion(info));
				cout << "AI��ܪ�����O" << number << endl;
			}
			else {
				std::cout << "�п�J�Ʀr1~4, �p�G�n�h�X�ʶR���ܿ�J9" << std::endl;
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
			std::cout << "�Ө���w�g�˳�" << std::endl;
		}
		else if (curMoney < 0) {
			number = 0;
			std::cout << "�z�S�����F" << std::endl;
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

	std::cout << "�o�^�X�ȤF" << (int)(moneyGive - moneyOwn) << "��" << endl;
	std::cout << "�{�b�֦�" << int(moneyGive) << "��" << endl;
}
void Character::Heal() {
	int heal = 100 * randomInt(1, 5);
	int chaHP = this->GetHealth() + heal;
	this->SetHealth(chaHP);
	std::cout << "�^�_�F" << heal << ",�{�b��q��: " << chaHP << endl;
}

void Character::setPlayer(std::string player){
	mPlayer = player;
}


std::string Character::getPlayer() {
	return mPlayer;
}