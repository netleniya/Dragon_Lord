/*
 Dragon.h
 Dragon_Lord Paedagogical Game
 Created by Mark Lee.
 C++ Programming for the Absolute Beginner, 2nd Ed. pp 192 - 198
 */

#pragma once
#include <stdio.h>
#include <iostream>
#include <string>

#define MAX(a,b) a>b ? a:b

class Dragon
{
private:
	int speed;
	std::string name;
	int hit_points;
	int armor;
	int treasure;
	int claw_damage;
	int size;
	
protected:
	Dragon(int the_size);
	int get_armor(){return armor;}
	int& get_hit_points(){return hit_points;}
	int get_claw_damage(){return claw_damage;}
	int get_size(){return size;}
	virtual int attack(int target_armor, int special_damage);
	
public:
	virtual int attack(int target_armor) = 0;
	virtual void defend(int damage) = 0;
	int get_treasure(){return treasure;}
	virtual std::string get_name(){return name;}
	int get_speed(){return speed;}
	bool is_alive(){return hit_points > 0;}
};
