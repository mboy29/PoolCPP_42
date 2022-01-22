/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:25:56 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:25:57 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Brain.hpp"

//Constructor

Brain::Brain(void) {
    std::cout << "Class Brain Initialized" << std::endl;
}

//Constructor By Copie

Brain::Brain(Brain const& cpy) {
    std::cout << "Class Brain Initialized By Copy" << std::endl;
    *this = cpy;
}

//Destructor

Brain::~Brain(void) {
    std::cout << "Class Brain Destroyed" << std::endl;
}

//Member Functions

void        Brain::setIdeas(std::string ideas, int idx) {
    if (idx < 100)
        this->_ideas[idx] = ideas;
}

void        Brain::viewIdeas(void) const {
    std::cout << "--> Viewing Ideas" << std::endl;
    for (int idx = 0; idx < 100; idx += 1) {
        if (this->_ideas[idx].empty() == false)
            std::cout << this->_ideas[idx] << " - ";
    }
    std::cout << std::endl;
}

//Equal Operator

Brain&     Brain::operator=(Brain const& op) {
    if (this != &op) {
        for (int idx = 0; idx < 100; idx += 1)
            this->_ideas[idx] = op._ideas[idx];
    }
    return (*this);
}
