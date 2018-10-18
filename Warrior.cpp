/*
* Warrior.cpp
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 18/10/2018
* Description: Main
*
* Copyright Notice
*/

#include "Warrior.h"
#include "Weapon.h"
#include <string>
#include <iostream>

Warrior::Warrior() {
	std::cout << "\nA Warrior was just born!";
}

Warrior::Warrior(std::string name, std::string charType, int health, int level, Weapon weapon) 
	:name_{ name }, charType_{ charType }, health_{ health }, level_{ level }, weapon_{ weapon } {
	std::cout << "\nA Warrior was just born!";
}

void Warrior::setName(std::string name) {
	name_ = name;
}

std::string Warrior::getName() {
	return name_;
}

void Warrior::setCharType(std::string charType) {
	charType_ = charType;
}

std::string Warrior::getCharType() {
	return charType_;
}

void Warrior::setHealth(int health) {
	health_ = health;
}

int Warrior::getHealth() {
	return health_;
}

void Warrior::setLevel(int level) {
	level_ = level;
}

int Warrior::getLevel() {
	return level_;
}

void Warrior::setWeapon(Weapon weapon) {
	weapon_ = weapon;
}

Weapon Warrior::getWeapon() {
	return weapon_;
}

std::string Warrior::printStatus() {
	std::string status;
	status = name_ + " is Lvl: " + std::to_string(level_) + " and is on " + std::to_string(health_) + "HP.\n" + "Character Type: " + charType_ + "\nWeapon: " + weapon_.getType();
	return status;
}
