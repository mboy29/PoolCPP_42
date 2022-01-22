/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:35:32 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:35:35 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int			testInt[3] = { 23, 12, 18 };
	double		testDouble[4] = { 23.12, 18.11, 29.07, 3.01 };
	std::string	testString[6] = { "Zero", "One", "Two", "Three", "Four", "Five" };
	
	std::cout << "-> Testing viewing function on interger array..." << std::endl;
	::iter(testInt, 3, ::viewIter);
	std::cout << "-> Testing viewing function on double array..." << std::endl;
	::iter(testDouble, 4, ::viewIter);
	std::cout << "-> Testing viewing function on string array..." << std::endl;
	::iter(testString, 6, ::viewIter);
	return (0);
}
