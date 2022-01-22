/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:16:26 by mboy              #+#    #+#             */
/*   Updated: 2021/12/01 05:16:35 by mboy             ###   ########.fr       */
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

//Destructeur de la classe Fixed

Fixed::~Fixed(void) {
	std::cout << "Destructor Called" << std::endl;
}

//Fonction membre de la classe Fixed (get et set)

int		Fixed::getRawBits(void) const {
	std::cout << "GetRawBits Member Function Called." << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

//Opérateur d'assignation

Fixed&	Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	return (*this);
}

