/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 08:57:55 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 08:57:57 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructor

ClapTrap::ClapTrap(void) {
	this->setName("Default ClapTrap");
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "[SUCCESS]: ClapTrap, \"" << this->getName()
		<< "\", has been constructed." << std::endl;
}

ClapTrap::ClapTrap(std::string const& name) {
	this->setName(name);
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "[SUCCESS]: ClapTrap, \"" << this->getName()
		<< "\", has been constructed." << std::endl;
}

//Constructor by Copy

ClapTrap::ClapTrap(ClapTrap const& cpy) {
	*this = cpy;
}

//Destructor

ClapTrap::~ClapTrap(void) {
	std::cout << "[SUCCESS]: ClapTrap, \"" << this->getName()
		<< "\", has been destroyed." << std::endl;
}

//Member Function

void		ClapTrap::setName(std::string const& name) {
	this->_name = name;
}

std::string const&	ClapTrap::getName(void) const {
	return (this->_name);
}

void				ClapTrap::setHitPoints(int const& hitPoints) {
	this->_hitPoints = hitPoints;
}

int const&			ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

void				ClapTrap::setEnergyPoints(int const& energyPoints) {
	this->_energyPoints = energyPoints;
}

int const&			ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}

void				ClapTrap::setAttackDamage(int const& attackDamage) {
	this->_attackDamage = attackDamage;
}

int const&			ClapTrap::getAttackDamage(void) const {
	return (this->_attackDamage);
}

void 				ClapTrap::attack(std::string const& target) {
	std::cout << "[ ATTACK ]: Claptrap \"" << this->getName() << "\" attacks "
		<< target << ", causing points of damage !" << std::endl;
}

void 				ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "[ DAMAGE ]: Claptrap \"" << this->getName() << "\" takes damage,"
		<< " remaining Hit Points : " << this->getHitPoints() << " !" << std::endl;
}

void 				ClapTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	std::cout << "[ REPAIRE ]: Claptrap \"" << this->getName() << "\" gets repaired,"
		<< " remaining Hit Points : " << this->getHitPoints() << " !" << std::endl;
}

void				ClapTrap::announce(void) const {
	std::cout << "[ ANNOUNCE ]: I'm \"" << this->getName() << "\", a ClapTrap. I currently have: " << std::endl;
	std::cout << "\tHitPoints = " << this->getHitPoints() << ";" << std::endl;
	std::cout << "\tEnergyPoints = " << this->getEnergyPoints() << ";" << std::endl;
	std::cout << "\tAttackDamage = " << this->getAttackDamage() << "." << std::endl;
}

//Operator Equal

ClapTrap&			ClapTrap::operator=(ClapTrap const &op) {
	if (this != &op) {
		this->setName(op.getName());
		this->setHitPoints(op.getHitPoints());
		this->setEnergyPoints(op.getEnergyPoints());
		this->setAttackDamage(op.getAttackDamage());
	}
	return (*this);
}
