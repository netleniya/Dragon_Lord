/*
	 Dragon_Lord Paedagogical Game
	 Created by Mark Lee.
	 C++ Programming for the Absolute Beginner, 2nd Ed. Ch 7, pp 192 - 198
	 Edited by Peter Fiee on 2020-10-13.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "menu.h"
#include "Dragon.h"
#include "BlackDragon.h"
#include "BlueDragon.h"
#include "RedDragon.h"

int main(int argc, const char * argv[]) {
	
	srand((unsigned int)time(0));
	Dragon* dragons[3];
	int hp = 15;
	int armor = 2;
	int temp_armor;
	int temp_attack;
	
	dragons[0] = new RedDragon(rand()%4 + 1);
	dragons[1] = new BlackDragon(rand()%4 +1);
	dragons[2] = new BlueDragon(rand()%4 +1);
	
	Dragon* d = dragons[rand()%3];
	
	std::cout 	<< "Welcome noble knight.\n"
				<< "You must save a princess. "
				<< "She has been captured by a "
				<< d->get_name() << ".\n"
				<< "You must defeat the dragon.\n";
	
	while(d -> is_alive() && hp > 10)
	{
		int choice = menu_choice();
		if (choice == 3)
			goto RUN;
		else if (choice == 1){
			temp_attack = rand()%16 +5;
			temp_armor = armor;
		}
		else{
			temp_attack = rand()%11;
			temp_armor = armor + 4;
		}
		
		hp -= d->attack(armor);
		d->defend(rand()%15 -5);
		
		std::cout << "\nYou deliver a mighty blow and deal " << temp_attack << " damage.\n";
		std::cout << "Your hit points are: " << hp;
	}
	
	if (d->is_alive()){
		std::cout << ". You have perished before the might of the " << d->get_name() << "\n";
	}
	else{
		std::cout << ". Congratulations: You have slain the " << d->get_name() << ". The princess is saved!\n";
	}
	
	return 0;
	
	RUN:
		std::cout <<"\nYou have fled like a coward.\n";
		return 0;
}
