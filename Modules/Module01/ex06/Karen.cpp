/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:19:22 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:19:23 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {};

Karen::~Karen(void) {};

void		Karen::complain(std::string level) {
	int		select = 0;

	select = (level.compare("debug") == 0) ? 1 : select; 
	select = (level.compare("info") == 0) ? 2 : select;
	select = (level.compare("warning") == 0) ? 3 : select;
	select = (level.compare("error") == 0) ? 4 : select;
	switch (select) {
		case 1: this->_debug(); 
		case 2: this->_info();
		case 3: this->_warning();
		case 4: this->_error(); break;
		default: {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
}

void		Karen::_debug(void) {
	std::cout << DEBUG << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my" 
		<< " 7XL-double-cheese-triple-pickle-special-ketchup"
		<< " burger. I just love it!" << RESET << std::endl;
	std::cout << std::endl;
}

void		Karen::_info(void) {
	std::cout << INFO << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost"
		<< " more money. You don’t put enough! If you did I"
		<< " would not have to ask for it!" << RESET << std::endl;
	std::cout << std::endl;
}

void		Karen::_warning(void) {
	std::cout << WARNING << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
		<< " I’ve been coming here for years and you just started"
		<< " working here last month." << RESET << std::endl;
	std::cout << std::endl;
}

void		Karen::_error(void) {
	std::cout << ERROR << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak"
		<< " to the manager now." << RESET << std::endl;
	std::cout << std::endl;
}

