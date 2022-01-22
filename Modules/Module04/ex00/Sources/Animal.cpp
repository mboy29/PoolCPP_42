/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:57 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:23:58 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Animal.hpp"

//Constructor

Animal::Animal(void) {
    this->setType("Default");
    std::cout << "Class Animal Initialized" << std::endl;
}

//Constructor By Copie

Animal::Animal(Animal const& cpy) {
    std::cout << "Class Animal Initialized By Copy" << std::endl;
    *this = cpy;
}

//Destructor

Animal::~Animal(void) {
    std::cout << "Class Animal Destroyed" << std::endl;
}

//Member Functions

void        Animal::setType(std::string type) {
    this->_type = type;
}

std::string Animal::getType(void) const {
    return (this->_type);
}

void        Animal::makeSound(void) const {
    std::cout << "** Default... **" << std::endl;
}

//Equal Operator

Animal&     Animal::operator=(Animal const& op) {
    if (this != &op)
        this->_type = op._type;
    return (*this);
}
