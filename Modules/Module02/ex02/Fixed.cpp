/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:17:27 by mboy              #+#    #+#             */
/*   Updated: 2021/12/01 05:17:29 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructeur de la classe Fixed

Fixed::Fixed(void) {
	this->_fixed = 0;
}

Fixed::Fixed(Fixed const& instance) {
	*this = instance;
}

Fixed::Fixed(int const n) {
	this->_fixed = n << this->_bitFrac;
}

Fixed::Fixed(float const n) {
	this->_fixed = roundf(n * pow(2, (this->_bitFrac)));
}

//Destructeur de la classe Fixed

Fixed::~Fixed(void) {};

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

Fixed&	Fixed::operator=(Fixed const& op) {
	this->_fixed = op.getRawBits();
	return (*this);
}

//Opérateurs Arithmétiques (+, -, * et /)

Fixed	Fixed::operator+(Fixed const& op) {
	return (Fixed(this->toFloat() + op.toFloat()));
}

Fixed	Fixed::operator-(Fixed const& op) {
	return (Fixed(this->toFloat() - op.toFloat()));
}

Fixed	Fixed::operator*(Fixed const& op) {
	return (Fixed(this->toFloat() * op.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& op) {
	return (Fixed(this->toFloat() / op.toFloat()));
}


//Opérateur Ostream 

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed) {
	return (os << fixed.toFloat());
}

//Opérateurs de Comparaison (<, >, <=, >=, == et !=)

bool	Fixed::operator<(Fixed const& comp) {
	return (this->toFloat() < comp.toFloat());
}

bool	Fixed::operator>(Fixed const& comp) {
	return (this->toFloat() > comp.toFloat());
}

bool	Fixed::operator<=(Fixed const& comp) {
	return (this->toFloat() <= comp.toFloat());
}

bool	Fixed::operator>=(Fixed const& comp) {
	return (this->toFloat() >= comp.toFloat());
}

bool	Fixed::operator==(Fixed const& comp) {
	return (this->toFloat() == comp.toFloat());
}

bool	Fixed::operator!=(Fixed const& comp) {
	return (this->toFloat() != comp.toFloat());
}

//Opérateur de pré-incrément et post-incrément

Fixed&	Fixed::operator++(void) {
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int inc) {
	(void)inc;
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

//Opérateur de pré-décrément et post_décrément

Fixed&	Fixed::operator--(void) {
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int dec) {
	(void)dec;
	Fixed tmp = *this;
	--(*this);
	return (tmp);
}

//Fonction membre Min et Max

Fixed&			Fixed::min(Fixed& n1, Fixed& n2) {
	if (n1.toFloat() < n2.toFloat())
		return (n1);
	return (n2);
}

const Fixed&	Fixed::min(Fixed const& n1, Fixed const& n2) {
	if (n1.toFloat() < n2.toFloat())
		return (n1);
	return (n2);
}

Fixed&			Fixed::max(Fixed& n1, Fixed& n2) {
	if (n1.toFloat() > n2.toFloat())
		return (n1);
	return (n2);
}

const Fixed&	Fixed::max(Fixed const& n1, Fixed const& n2) {
	if (n1.toFloat() > n2.toFloat())
		return (n1);
	return (n2);
}
