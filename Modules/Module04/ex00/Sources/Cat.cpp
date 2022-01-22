/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:24:00 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:24:01 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Cat.hpp"

//Constructor

Cat::Cat(void) {
    this->setType("Cat");
    std::cout << "Class Cat Initialized" << std::endl;
}

//Constructor By Copie

Cat::Cat(Cat const& cpy) {
    std::cout << "Class Cat Initialized By Copy" << std::endl;
    *this = cpy;
}

//Destructor

Cat::~Cat(void) {
    std::cout << "Class Cat Destroyed" << std::endl;
}

//Member Functions

void        Cat::makeSound(void) const {
    std::cout << "** Miaooouuuu... **" << std::endl;
}

//Equal Operator

Cat&     Cat::operator=(Cat const& op) {
    if (this != &op)
        this->_type = op._type;
    return (*this);
}
