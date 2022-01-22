/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertTo.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:34:06 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:34:08 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	convertToChar(void) {
	char	convChar = 0;

	if (toConvI < 32 || toConvI > 126) {
		std::cout << "Non Displayable" << std::endl;
		return ;
	}
	convChar = static_cast<char>(toConvI);
	std::cout << "'" << convChar << "'" << std::endl;	
}

void	convertToInt(void) {
	int		convInt = 0;

	if (toConvI < std::numeric_limits<int>::min()
		|| toConvI > std::numeric_limits<int>::max()) {
		std::cout << "Impossible" << std::endl;
		return ;
	}
	convInt = static_cast<int>(toConvI);
	std::cout << convInt << std::endl;
}

void	convertToFloat(void) {
	if (toConvD < -std::numeric_limits<float>::max()
		|| toConvD > std::numeric_limits<float>::max()) {
		std::cout << "Impossible" << std::endl;
		return ;
	}
	if (static_cast<float>(toConvI) == toConvD)
		std::cout << toConvD << ".0f" << std::endl;
	else
		std::cout << toConvD << "f" << std::endl;
}

void	convertToDouble(void) {
	if (toConvD < -std::numeric_limits<double>::max()
		|| toConvD > std::numeric_limits<double>::max()) {
		std::cout << "Impossible" << std::endl;
		return ;
	}
	if (static_cast<float>(toConvI) == toConvD)
		std::cout << toConvD << ".0" << std::endl;
	else
		std::cout << toConvD << std::endl;
}

void	convertTo(void) {
	void		(*convertTo[4])(void) = { convertToChar,
					convertToInt, convertToFloat, convertToDouble };
	
	for (int idx = 0; idx < 4; idx += 1) {
		std::cout << convertToType[idx];
		(*convertTo[idx])();
	}
}
