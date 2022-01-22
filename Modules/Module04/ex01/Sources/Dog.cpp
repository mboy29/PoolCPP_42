/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:26:03 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:26:04 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Dog.hpp"

//Constructor

Dog::Dog(void) {
    this->setType("Dog");
    this->_brain = new Brain();
    for (int idx = 0; idx < 100; idx += 1)
        this->_brain->setIdeas("", idx);
    std::cout << "Class Dog Initialized" << std::endl;
}

//Constructor By Copie

Dog::Dog(Dog const& cpy) {
    std::cout << "Class Dog Initialized By Copy" << std::endl;
    *this = cpy;
}

//Destructor

Dog::~Dog(void) {
    delete this->_brain;
    std::cout << "Class Dog Destroyed" << std::endl;
}

//Member Functions

void        Dog::makeSound(void) const {
    std::cout << "** Waouuuffff... **" << std::endl;
}

Brain*      Dog::getBrain(void) const {
    return (this->_brain);
}

//Equal Operator

Dog&     Dog::operator=(Dog const& op) {
    if (this != &op) {
        this->_type = op._type;
        this->_brain->operator=(*op._brain);
    }
    return (*this);
}
