//  BlueDragon.cpp
//  Dragon_Lord

#include "BlueDragon.h"

BlueDragon::BlueDragon(int the_size) : Dragon(the_size){
	ice_damage = 3 * get_size();
}

int BlueDragon::attack(int target_armor){
	return Dragon::attack(target_armor, ice_damage);
}

void BlueDragon::defend(int damage){
	get_hit_points() -= (damage - get_armor()) /2;
}
