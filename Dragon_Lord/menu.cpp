/*  menu.cpp
	Dragon_Lord
*/
#include "menu.h"
#include <iostream>

int menu_choice(){
	
	int choice;
	do{
		std::cout	<< "\nEnter [1] to attack.\n"
					<< "Enter [2] to defend .\n"
					<< "Enter [3] to run away.\n";
		
		std::cout << "> ";
		std::cin >> choice;
	
	} while (choice < 1 && choice > 3);
	
	return choice;
}
