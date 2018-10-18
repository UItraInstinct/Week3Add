/*
* Wizard.cpp
*
* Version Information: V0.0.1
* Author: Conor McCay
* Date: 18/10/2018
* Description: Main
*
* Copyright Notice
*/

#include "Wizard.h"
#include "Weapon.h"
#include <string>
#include <iostream>

Wizard::Wizard() {
	std::cout << "\nA Wizard was just born!";
}

Wizard::Wizard(std::string name, std::string charType, int health, int level, Weapon weapon)
	:name_{ name }, charType_{ charType }, health_{ health }, level_{ level }, weapon_{ weapon } {
	std::cout << "\nA Wizard was just born!";
}

void Wizard::setName(std::string name) {
	name_ = name;
}

std::string Wizard::getName() {
	return name_;
}

void Wizard::setCharType(std::string charType) {
	charType_ = charType;
}

std::string Wizard::getCharType() {
	return charType_;
}

void Wizard::setHealth(int health) {
	health_ = health;
}

int Wizard::getHealth() {
	return health_;
}

void Wizard::setLevel(int level) {
	level_ = level;
}

int Wizard::getLevel() {
	return level_;
}

void Wizard::setWeapon(Weapon weapon) {
	weapon_ = weapon;
}

Weapon Wizard::getWeapon() {
	return weapon_;
}