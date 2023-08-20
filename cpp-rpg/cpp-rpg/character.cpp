#include "character.h "

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