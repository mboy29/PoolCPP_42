/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:02:07 by mboy              #+#    #+#             */
/*   Updated: 2021/10/25 16:02:08 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/phonebook.hpp"

std::string	Data::add_check(std::string str, int idx)
{
	int	check = 0;

	if (str.compare("") == 0) {
		std::cout << RED << "    Error, must contain at least one character." << RESET;
		check = 1;
	}
	else {
		for (int idx = 0; idx < (int)str.size(); idx++)
		{
			if (str.at(idx) < 32 || str.at(idx) > 127) {
				std::cout << RED << "    Error, must contain printable characters." << RESET;
				check = 1;
			}
		}
	}
	if (check == 1) {
		std::string val = "";
		std::cout << tool_add_info(idx);
		std::getline(std::cin, val);
		std::string ret = add_check(val, idx);
		return (ret);
	}
	return (str);
}

void	Data::add(Data *data) {
	if (data->_idx >= 8) {
		std::cout << RED << "  Error, can't add more than 8 contacts." << RESET << std::endl << std::endl;
		return ;
	}
	data->_idx += 1;
	std::cout << BLUE << "  Creating new contact..." << RESET << std::endl;
	for (int idx = 0; idx < 5; idx++) {
		std::string val = "";
		std::cout << "  " << tool_add_info(idx);
		std::getline(std::cin, val);
		data->_contact[data->_idx - 1][idx] = add_check(val, idx);
	}
	std::cout << BLUE << "  Success, new contact created !\n" << RESET << std::endl;
	return ;
}
