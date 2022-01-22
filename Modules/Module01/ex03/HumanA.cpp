/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:16:02 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:16:14 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {};

HumanA::~HumanA(void) {};

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
