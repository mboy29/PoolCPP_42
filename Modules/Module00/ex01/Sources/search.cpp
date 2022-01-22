/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:02:24 by mboy              #+#    #+#             */
/*   Updated: 2021/10/25 16:02:26 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/phonebook.hpp"

void	Data::search_print(Data *data) const {
	std::cout << BLUE << "  | Index    | Name     | Surname  | Nickname |" << std::endl;
	std::cout << "  _____________________________________________" << std::endl << "  |";
	for (int idx1 = 0; idx1 < (int)data->_idx; idx1++) {
		std::cout << " " << idx1 << "        |";
		for (int idx2 = 0; idx2 < 3; idx2++) {
			tool_search_print(tool_search_info(idx2), data->_contact[idx1][idx2]);
		}
		std::cout << std::endl;
		if (idx1 < (int)data->_idx - 1)
			std::cout << "  |";
	}
	std::cout << RESET << std::endl;
	return ;
}

void	Data::search_print_index(Data *data, std::string index) const {
	int n_index = tool_atoi(index);

	if (index.compare("") == 0 || n_index == -1 || n_index > (int)data->_idx - 1) {
		std::cout << RED << "    Error, incorrect Index." << RESET << std::endl;
		return ;
	}
	for (int idx = 0; idx < 5; idx++) {
		std::cout << "  " << tool_add_info(idx)
			<< data->_contact[tool_atoi(index)][idx]
			<< ";" << std::endl;
	}
	return ;
}

void	Data::search(Data *data) const {
	std::string index = "";

	if (data->_idx > 0)
	{
		search_print(data);
		std::cout << std::endl;
		std::cout << "  Select index to see further information : ";
		std::getline(std::cin, index);
		search_print_index(data, index);
		std::cout << std::endl;
	}
	else
		std::cout << RED << "  No contacts in phonebook ! Creat one by entering ADD.\n" << RESET << std::endl;
	return ;
}
