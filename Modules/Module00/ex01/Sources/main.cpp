/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:02:16 by mboy              #+#    #+#             */
/*   Updated: 2021/10/25 16:02:18 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/phonebook.hpp"

Data::Data(void) {
	this->_idx = 0;
}
Data::~Data(void) {};

int		main(void)
{
	Data	data;

	std::string command = "";
	std::cout << GREEN << "* WELCOME TO PHONEBOOK *\n" << RESET << std::endl;
	while (command.compare("EXIT") != 0) {
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			data.add(&data);
		else if (command.compare("SEARCH") == 0)
			data.search(&data);
		else if (command.compare("EXIT") != 0) {
			std::cout << RED << "  Error, command doesn't not exist: "
				<< "use ADD, SEARCH ou EXIT.\n" << RESET << std::endl;
		}
	}
	std::cout << GREEN << "\n* EXITING PHONEBOOK *" << RESET << std::endl;
	return (0);
}
