/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:15:34 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:15:35 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {};

Zombie::~Zombie(void) {
	std::cout << this->_name << " is dead." << std::endl;
}
void	Zombie::nameZombie(std::string name) {
	this->_name = name;
}

void 	Zombie::announce(void) {
	std::cout << this->_name << " BraiiiiiiinnnzzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
	Zombie *newZombie = new Zombie;
	newZombie->nameZombie(name); 
	return (newZombie);
}

void randomChump(std::string name) {
	Zombie*	randomChump = newZombie(name);
	randomChump->announce();
	delete randomChump;
}
