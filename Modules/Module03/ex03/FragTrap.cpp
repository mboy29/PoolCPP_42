/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:02:40 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:02:42 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Constructor

FragTrap::FragTrap(void) {
	this->setName("Default FragTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "[SUCCESS]: FragTrap, \"" << this->getName()
		<< "\", has been constructed." << std::endl;
}

FragTrap::FragTrap(std::string const& name): ClapTrap(name) {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "[SUCCESS]: FragTrap, \"" << this->getName()
		<< "\", has been constructed." << std::endl;
}

//Constructor by Copy

FragTrap::FragTrap(FragTrap const& cpy) {
	*this = cpy;
}

//Destructor

FragTrap::~FragTrap(void) {
	std::cout << "[SUCCESS]: FragTrap, \"" << this->getName()
		<< "\", has been destroyed." << std::endl;
}

//Member Function


void		FragTrap::announce(void) const {
	std::cout << "[ ANNOUNCE ]: I'm \"" << this->getName() << "\", a FragTrap. I currently have: " << std::endl;
	std::cout << "\tHitPoints = " << this->getHitPoints() << ";" << std::endl;
	std::cout << "\tEnergyPoints = " << this->getEnergyPoints() << ";" << std::endl;
	std::cout << "\tAttackDamage = " << this->getAttackDamage() << "." << std::endl;
}

//Operator Equal

void		FragTrap::highFivesGuys(void) {
	std::cout << "[ HIGH FIVE ]: Hi, I'm \"" << this->getName()
		<< "\", a FragTrap. Wanna high fives guys ?!" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &op) {
	if (this != &op) {
		this->setName(op.getName());
		this->setHitPoints(op.getHitPoints());
		this->setEnergyPoints(op.getEnergyPoints());
		this->setAttackDamage(op.getAttackDamage());
	}
	return (*this);
}
