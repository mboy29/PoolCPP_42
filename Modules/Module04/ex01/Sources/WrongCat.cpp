/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:26:13 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:26:14 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/WrongCat.hpp"

//Constructor

WrongCat::WrongCat(void) {
    this->setType("WrongCat");
    std::cout << "Class WrongCat Initialized" << std::endl;
}

//Constructor By Copie

WrongCat::WrongCat(WrongCat const& cpy) {
    std::cout << "Class WrongCat Initialized By Copy" << std::endl;
    *this = cpy;
}

//Destructor

WrongCat::~WrongCat(void) {
    std::cout << "Class WrongCat Destroyed" << std::endl;
}

//Member Functions

void        WrongCat::makeSound(void) const {
    std::cout << "** Wrong miaooouuuu... **" << std::endl;
}

//Equal Operator

WrongCat&     WrongCat::operator=(WrongCat const& op) {
    if (this != &op)
        this->_type = op._type;
    return (*this);
}
