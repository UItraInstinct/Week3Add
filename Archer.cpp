/*
* Archer.cpp
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 18/10/2018
* Description: Main
*
* Copyright Notice
*/

#include "Archer.h"
#include "Weapon.h"
#include <string>
#include <iostream>

Archer::Archer() {
	std::cout << "\nAn Archer was just born!";
}

Archer::Archer(std::string name, std::string charType, int health, int level, Weapon weapon)
	:name_{ name }, charType_{ charType }, health_{ health }, level_{ level }, weapon_{ weapon } {
	std::cout << "\nAn Archer was just born!";
}

void Archer::setName(std::string name) {
	name_ = name;
}

std::string Archer::getName() {
	return name_;
}

void Archer::setCharType(std::string charType) {
	charType_ = charType;
}

std::string Archer::getCharType() {
	return charType_;
}

void Archer::setHealth(int health) {
	health_ = health;
}

int Archer::getHealth() {
	return health_;
}

void Archer::setLevel(int level) {
	level_ = level;
}

int Archer::getLevel() {
	return level_;
}

void Archer::setWeapon(Weapon weapon) {
	weapon_ = weapon;
}

Weapon Archer::getWeapon() {
	return weapon_;
}