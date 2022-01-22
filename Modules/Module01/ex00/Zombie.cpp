/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:15:08 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:15:09 by mboy             ###   ########.fr       */
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
