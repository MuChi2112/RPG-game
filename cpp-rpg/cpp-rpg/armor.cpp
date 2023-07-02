#include "armor.h"

Armor::Armor(ArmorElement element){
	Price=element.price;
	ATK=element.atk;
	Name=element.name;
	Rank=element.rank;
}
	
    
    int Armor::GetPrice(){return Price;}
	int Armor::GetATK(){return ATK;}
	string Armor::GetName(){return Name;}
	string Armor::GetRank(){return Rank;}
