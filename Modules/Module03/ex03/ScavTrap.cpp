/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:02:57 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:02:58 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Constructor

ScavTrap::ScavTrap(void) {
	this->setName("Default ScavTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->_gateKeeperMode = false;
	std::cout << "[SUCCESS]: ScavTrap, \"" << this->getName()
		<< "\", has been constructed." << std::endl;
}

ScavTrap::ScavTrap(std::string const& name): ClapTrap(name) {
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->_gateKeeperMode = false;
	std::cout << "[SUCCESS]: ScavTrap, \"" << this->getName()
		<< "\", has been constructed." << std::endl;
}

//Constructor by Copy

ScavTrap::ScavTrap(ScavTrap const& cpy) {
	*this = cpy;
}

//Destructor

ScavTrap::~ScavTrap(void) {
	std::cout << "[SUCCESS]: ScavTrap, \"" << this->getName()
		<< "\", has been destroyed." << std::endl;
}

//Member Function

bool const&	ScavTrap::getGateKeeperMode(void) const {
	return (this->_gateKeeperMode);
}

void		ScavTrap::guardGate(void) {
	this->_gateKeeperMode = true;
	std::cout << "[ GUARD GATE ]: ScavTrap, \"" << this->getName()
		<< "\", has entered Gate Keeper mode !" << std::endl;
}

void		ScavTrap::announce(void) const {
	std::cout << "[ ANNOUNCE ]: I'm " << this->getName() << ", a ScavTrap. I currently have: " << std::endl;
	std::cout << "\tHitPoints = " << this->getHitPoints() << ";" << std::endl;
	std::cout << "\tEnergyPoints = " << this->getEnergyPoints() << ";" << std::endl;
	std::cout << "\tAttackDamage = " << this->getAttackDamage() << "." << std::endl;
	std::cout << "\tGateKeeperMode = ";
		if (this->getGateKeeperMode() == 0)
			std::cout << "Desactivated." << std::endl;
		else
			std::cout << "Activated." << std::endl;
}

//Operator Equal

ScavTrap&	ScavTrap::operator=(ScavTrap const &op) {
	if (this != &op) {
		this->setName(op.getName());
		this->setHitPoints(op.getHitPoints());
		this->setEnergyPoints(op.getEnergyPoints());
		this->setAttackDamage(op.getAttackDamage());
	}
	return (*this);
}
