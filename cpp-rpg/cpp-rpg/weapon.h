#pragma once
#include <string>
#include <map>
using namespace std;

namespace WeaponLib {
	struct WeaponElement {
		int price;
		int atk;
		std::string name;
		std::string rank;
	};

	class Weapon {
	public:
		Weapon();
		Weapon(WeaponElement element);
		int GetPrice();
		int GetATK();
		string GetName();
		string GetRank();

	protected:
		int Price;
		int ATK;
		string mName;
		string Rank;
	};
}
