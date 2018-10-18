/*
* Weapon.cpp
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 18/10/2018
* Description: Main
*
* Copyright Notice
*/

#include "Weapon.h"
#include <iostream>
#include <string>

Weapon::Weapon() {
	std::cout << "\nAn awesome weapon has once more been crafted by master blacksmith Shane";
}

Weapon::Weapon(std::string type, int damage, int level) 
	:type_{ type }, damage_{ damage }, level_{ level } {
	std::cout << "\nAn awesome weapon has once more been crafted by master blacksmith Shane";
}

void Weapon::setType(std::string type) {
	type_ = type;
}

std::string Weapon::getType() {
	return type_;
}

void Weapon::setDamage(int damage) {
	damage_ = damage;
}

int Weapon::getDamage() {
	return damage_;
}

void Weapon::setLevel(int level) {
	level_ = level;
}

int Weapon::getLevel() {
	return level_;
}