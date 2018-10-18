/*
* Weapon.h
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 18/10/2018
* Description: Main
*
* Copyright Notice
*/

#pragma once

#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(std::string type, int damage, int level);
		void setType(std::string type);
		std::string getType();
		void setDamage(int damage);
		int getDamage();
		void setLevel(int level);
		int getLevel();

	private:
		std::string type_;
		int damage_;
		int level_;
};