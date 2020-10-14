//  Dragon.cpp
//  Dragon_Lord

#include "Dragon.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

Dragon::Dragon(int the_size) : size(the_size)
{
	if (size < 1 || size > 4){size = 3;}
	claw_damage = 2 * size;
	speed = 3 * size;
	hit_points = 4 * size;
	armor = size;
	treasure = 1000 * size;
	srand((unsigned int)time(0));
}

int Dragon::attack(int target_armor, int special_damage)
{
	int use_special = rand() % 2;
	int damage;
	if (use_special) {damage = special_damage;}
	else{
		damage = get_claw_damage();
	}
	return MAX(damage - target_armor, 0);
}
