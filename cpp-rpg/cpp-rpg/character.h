#pragma once

#include <string>

#include "weapon.h"
#include "armor.h"

namespace CharacterLib {

	enum class CharacterElemnt {
		Warrior,
		Monster,
		Wizrd
	};

	class Character {
	public:
		Character() {};
		std::string GetName();
		int GetHealth();
		int GetATK();
		int GetDEF();
		int GetMoney();
		WeaponLib::Weapon GetWeapon();
		ArmorLib::Armor GetArmor();
		void SetMoney(int money);
		void SetWeapon(WeaponLib::Weapon weapon);
		void SetArmor(ArmorLib::Armor armor);
		void TakeAttack();
		void Treatment();
		void Show();

	private:

		std::string mName;
		int mHealth;
		int mATK;
		int mDEF;
		int mMoney;

		WeaponLib::Weapon mWeapon;
		ArmorLib::Armor mArmor;
	};
}