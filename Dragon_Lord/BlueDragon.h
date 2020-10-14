//  BlueDragon.hpp
//  Dragon_Lord

#pragma once

#include "Dragon.h"
#include <stdio.h>
#include <string>

class BlueDragon : public Dragon
{
private:
	int ice_damage;
	
public:
	BlueDragon(int the_size);
	int attack(int target_armor);
	void defend(int damage);
	std::string get_name(){return "Blue Dragon";}
};
