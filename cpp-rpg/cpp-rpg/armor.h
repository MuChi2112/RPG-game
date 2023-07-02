#pragma once
#include <string>
using namespace std;

struct ArmorElement{
    int price;
    int atk;
    std::string name;
    std::string rank;
};

class Armor{

public:
	Armor(ArmorElement element);
	int GetPrice();
	int GetATK();
	string GetName();
	string GetRank();

protected:
	int Price;			
	int ATK;			
	string Name;		
	string Rank;		
};