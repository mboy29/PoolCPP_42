/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:17:01 by mboy              #+#    #+#             */
/*   Updated: 2021/12/01 05:17:02 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructeur de la classe Fixed

Fixed::Fixed(void) {
	std::cout << "Default Constructor Called" << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed(Fixed const& instance) {
	std::cout << "Copy Constructor Called" << std::endl;
	*this = instance;
}

Fixed::Fixed(int const n) {
	std::cout << "Int Constructor Called" <<std::endl;
	this->_fixed = n << this->_bitFrac;
}

Fixed::Fixed(float const n) {
	std::cout << "Float Constructor Called" <<std::endl;
	this->_fixed = roundf(n * pow(2, (this->_bitFrac)));
}

//Destructeur de la classe Fixed

Fixed::~Fixed(void) {
	std::cout << "Destructor Called" << std::endl;
}

//Fonction membre de la classe Fixed (get et set)

int		Fixed::getRawBits(void) const {
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

//Convertisseurs de nombre fixe en float ou int

float	Fixed::toFloat(void) const {
	return ((float)this->_fixed * pow(2, -(this->_bitFrac)));
}

int		Fixed::toInt(void) const {
	return (this->_fixed / pow(2, this->_bitFrac));
}

//Opérateur d'assignation

Fixed&	Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	return (*this);
}

//Opérateur Ostream 

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed) {
	return (os << fixed.toFloat());
}

