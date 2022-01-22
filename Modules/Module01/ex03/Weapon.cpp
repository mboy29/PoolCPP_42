/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:16:53 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:16:54 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->setType(type);
}

Weapon::~Weapon(void) {};

std::string const Weapon::getType(void) const {
	return (this->_type);
}

void		Weapon::setType(std::string type) {
	this->_type = type;
}
