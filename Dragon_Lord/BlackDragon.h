//  BlackDragon.hpp
//  Dragon_Lord

#pragma once

#include "Dragon.h"
#include <stdio.h>
#include <string>

class BlackDragon : public Dragon
{
private:
	int poison_damage;
	
public:
	BlackDragon(int the_size);
	int attack(int target_armor);
	void defend(int damage);
	std::string get_name(){return "Black Dragon";}
};
