//  RedDragon.hpp
//  Dragon_Lord

#pragma once

#include "Dragon.h"
#include <stdio.h>
#include <string>

class RedDragon : public Dragon
{
private:
	int fire_damage;
	
public:
	RedDragon(int the_size);
	int attack(int target_armor);
	void defend(int damage);
	std::string get_name(){return "Red Dragon";}
};
