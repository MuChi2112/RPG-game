#include "character.h "

using namespace CharacterLib;

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

void Character::SetMoney(int money) {
}
void Character::SetWeapon(WeaponLib::Weapon weapon) {
}
void Character::SetArmor(ArmorLib::Armor armor) {
}
void Character::TakeAttack() {
}
void Character::Treatment() {
}
void Character::Show() {
}