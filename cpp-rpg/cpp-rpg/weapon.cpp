#include "weapon.h"

Weapon::Weapon(WeaponElement element){
	Price=element.price;
	ATK=element.atk;
	Name=element.name;
	Rank=element.rank;
}
	
    
    int Weapon::GetPrice(){return Price;}
	int Weapon::GetATK(){return ATK;}
	string Weapon::GetName(){return Name;}
	string Weapon::GetRank(){return Rank;}
