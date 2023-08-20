#include "character.h "

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
	int damage = (mATK + mWeapon.GetATK()) * randomInt(1, 5) - opponent->GetDEF();
	int opponentHp = opponent->GetHealth() - damage;
	opponent->SetHealth((opponentHp < 0) ? 0 : opponentHp);
}
void Character::Treatment() {
}
void Character::Show() {
}