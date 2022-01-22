/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:02:32 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:02:33 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructor

DiamondTrap::DiamondTrap(void) {
	this->setName("Default DiamondTrap");
	ClapTrap::setName("Default DiamondTrap_clap_name");
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	this->_gateKeeperMode = false;
	std::cout << "[SUCCESS]: DiamondTrap, \"" << this->getName()
		<< "\", has been constructed." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const& name) {
	this->setName(name);
	ClapTrap::setName(name + "_clap_name");
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints() - 50);
	this->setAttackDamage(FragTrap::getAttackDamage());
	this->_gateKeeperMode = false;
	std::cout << "[SUCCESS]: DiamondTrap, \"" << this->getName()
		<< "\", has been constructed." << std::endl;
}

//Constructor by Copy

DiamondTrap::DiamondTrap(DiamondTrap const& cpy) {
	*this = cpy;
}

//Destructor

DiamondTrap::~DiamondTrap(void) {
	std::cout << "[SUCCESS]: DiamondTrap, \"" << this->getName()
		<< "\", has been destroyed." << std::endl;
}

//Member Function

void		DiamondTrap::setName(std::string const& name) {
	this->_name = name;
}

std::string const&	DiamondTrap::getName(void) const {
	return (this->_name);
}

void				DiamondTrap::announce(void) const {
	std::cout << "[ ANNOUNCE ]: I'm a DiamondTrap. This means I have two names : \"" << this->getName()
		<< "\" and \"" << ClapTrap::getName() << "\"! I currently have: " << std::endl;
	std::cout << "\tHitPoints = " << this->getHitPoints() << ";" << std::endl;
	std::cout << "\tEnergyPoints = " << this->getEnergyPoints() << ";" << std::endl;
	std::cout << "\tAttackDamage = " << this->getAttackDamage() << "." << std::endl;
	std::cout << "\tGateKeeperMode = ";
		if (this->getGateKeeperMode() == 0)
			std::cout << "Desactivated." << std::endl;
		else
			std::cout << "Activated." << std::endl;
}

void				DiamondTrap::whoAmI(void) {
	std::cout << "[ WHO AM I ]: \"" << this->getName()
		<< "\" or \"" << ClapTrap::getName() << "\"?" << std::endl;
}

//Operator Equal


DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &op) {
	if (this != &op) {
		this->setName(op.getName());
		this->setHitPoints(op.getHitPoints());
		this->setEnergyPoints(op.getEnergyPoints());
		this->setAttackDamage(op.getAttackDamage());
	}
	return (*this);
}
