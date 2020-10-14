//  RedDragon.cpp
//  Dragon_Lord

#include "RedDragon.h"

RedDragon::RedDragon(int the_size) : Dragon(the_size){
	fire_damage = 4 * get_size();
}

int RedDragon::attack(int target_armor){
	return Dragon::attack(target_armor, fire_damage);
}

void RedDragon::defend(int damage){
	get_hit_points() -= (damage - get_armor()) /3;
}
