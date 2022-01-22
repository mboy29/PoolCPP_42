/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertInvalid.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:34:02 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:34:03 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	convertInvalid(void) {
	for (int idx = 0; idx < 4; idx += 1) {
		switch (idx) {
			case 2 : std::cout << convertToType[idx] << "Nanf" << std::endl; break;
			case 3 : std::cout << convertToType[idx] << "Nan" << std::endl; break;
			default : std::cout << convertToType[idx] << "Impossible" << std::endl; break;
		}
	}
}

int		convertInvalidOccurrance(std::string const conv, std::string const toFind, int toStart, int toEnd) {
	int		idx = toStart, occurance = 0;

	while ((idx = conv.find(toFind, idx)) != toEnd) {
		if (idx == -1 || idx >= toEnd)
			break;
		idx += toFind.size();
		occurance += 1;
	}
	return (occurance);
}

int		convertInvalidAlpha(std::string const conv) {
	if (conv.size() > 1 && conv.at(0) != '+'
		&& conv.at(0) != '-' && isdigit(conv.at(0)) == 0)
		return (1);
	return (0);
}

int		convertInvalidNum(std::string const conv) {
	int		is = 0;
	std::string const  	toFind[5] = { ".", "+", "-", "f", "F" };

	for (int idx = 0; idx < 5; idx += 1) {
		if ((idx == 0 && convertInvalidOccurrance(conv, toFind[idx], 0, conv.size()) > 1)
			|| ((idx == 1 || idx == 2) && convertInvalidOccurrance(conv, toFind[idx], 1, conv.size()) > 0)
			|| (idx > 2 && convertInvalidOccurrance(conv, toFind[idx], 0, conv.size() -1) > 0))
			return (1);
	}
	for (size_t idx = 0; idx < conv.size(); idx += 1) {
		if (conv.at(idx) == 'f' || conv.at(idx) == 'F')
			is += 1; 
		if (conv.at(idx) != '+' && conv.at(idx) != '-'
			&& conv.at(idx) != '.' && conv.at(idx) != 'f'
			&& conv.at(idx) != 'F' && isdigit(conv.at(idx)) == 0)
			return (1);
	}
	if (is == 0)
		return (2);
	return (0);
}
