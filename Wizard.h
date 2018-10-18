/*
* Wizard.h
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 18/10/2018
* Description: Main
*
* Copyright Notice
*/

#pragma once

#include "Weapon.h"
#include <string>

class Wizard {
	public:
		Wizard();
		Wizard(std::string name, std::string charType, int health, int level, Weapon weapon);
		void setName(std::string name);
		std::string getName();
		void setCharType(std::string charType);
		std::string getCharType();
		void setHealth(int health);
		int getHealth();
		void setLevel(int level);
		int getLevel();
		void setWeapon(Weapon weapon);
		Weapon getWeapon();

	private:
		std::string name_;
		std::string charType_;
		int health_;
		int level_;
		Weapon weapon_;
};