/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:02:31 by mboy              #+#    #+#             */
/*   Updated: 2021/10/25 16:02:32 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/phonebook.hpp"

int     tool_atoi(std::string str)
{
       	int idx = -1, nbr = 0;
		char	*cpy[(int)str.size()];
	
        while (str[++idx])
		{
			cpy[idx] = &str.at(idx);
			if (str[idx] >= '0' && str[idx] <= '9')
            	nbr = nbr * 10 + (str[idx] - 48);
			else
				return (-1);
		}
        return (nbr);
}

std::string tool_add_info(int idx) {
	std::string elem[5] = { "  Name: ", "  Surname: ", "  Nickname: ",
							"  Phone Number: ", "  Darkest Secret: "};
	return (elem[idx]);
}

std::string	tool_search_info(int idx) {
	std::string elem[3] = { "Name     ", "Surname  ", "Nickname " };
	return (elem[idx]);
}

void tool_search_print(std::string size, std::string info) {
	int	idx = -1;
	int blank = (int)(size.size() - info.size());

	std::cout << " ";
	if (blank >= 0) {
		std::cout << info;
		while (++idx < blank - 1)
			std::cout << " ";
		std::cout << " |";
	}
	else {
		while (++idx < (int)size.size() - 4)
			std::cout << info.at((size_t)idx);
		std::cout << "... |";
	}
	return ;
}
