#pragma once

#include <string>

#include "weapon.h"
#include "armor.h"
#include "weaponStore.h"
#include "armorStore.h"

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
		void SetName(std::string name);
		int GetHealth();
		int GetATK();
		int GetDEF();
		int GetMoney();
		WeaponLib::Weapon GetWeapon();
		ArmorLib::Armor GetArmor();
		void SetHealth(int hp);
		void SetMoney(int money);
		void SetWeapon(WeaponLib::Weapon weapon);
		void SetArmor(ArmorLib::Armor armor);
		void TakeAttack(Character* opponent);
		void Treatment();
		void Show();
		bool BuyWeapon(WeaponStore* store);
		bool BuyArmor(ArmorStore* store);
		void Heal();

	protected:

		std::string mName;
		int mHealth;
		int mATK;
		int mDEF;
		int mMoney;

		WeaponLib::Weapon mWeapon;
		ArmorLib::Armor mArmor;
	};
}