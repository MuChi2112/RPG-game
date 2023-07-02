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
		Weapon(WeaponElement element);
		int GetPrice();
		int GetATK();
		string GetName();
		string GetRank();

	protected:
		int Price;			//武器价格
		int ATK;			//武器攻击力
		string Name;		//武器名称
		string Rank;		//武器等级
	};
}
