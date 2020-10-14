//  BlackDragon.cpp
//  Dragon_Lord

#include "BlackDragon.h"

BlackDragon::BlackDragon(int the_size) : Dragon(the_size){
	poison_damage = get_size();
}

int BlackDragon::attack(int target_armor){
	return Dragon::attack(target_armor, poison_damage);
}

void BlackDragon::defend(int damage){
	get_hit_points() -= (damage - get_armor());
}
