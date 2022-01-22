/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:35:15 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:35:16 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	testInteger(void)
{
	int			test1 = 42, test2 = 23;

	std::cout << "-> Testing on the 2 following integer..." << std::endl;
	std::cout << "   First int : " << test1 << std::endl;
	std::cout << "   Secont int : " << test2 << std::endl;
	::swap(test1, test2);
	std::cout << "   -> After swap :" << std::endl;
	std::cout << "      First int : " << test1 << std::endl;
	std::cout << "      Secont int : " << test2 << std::endl;
	std::cout << "   -> Minimum int : " << ::min(test1, test2) << std::endl;
	std::cout << "   -> Maximum int : " << ::max(test1, test2) << std::endl << std::endl;
}

void	testString(void)
{
	std::string	test1 = "Forty-two", test2 = "Twenty three";

	std::cout << "-> Testing on the 2 following strings..." << std::endl;
	std::cout << "   First string : " << test1 << std::endl;
	std::cout << "   Secont string : " << test2 << std::endl;
	::swap(test1, test2);
	std::cout << "   -> After swap :" << std::endl;
	std::cout << "      First string : " << test1 << std::endl;
	std::cout << "      Secont string : " << test2 << std::endl;
	std::cout << "   -> Minimum string : " << ::min(test1, test2) << std::endl;
	std::cout << "   -> Maximum string : " << ::max(test1, test2) << std::endl;
}

int		main(void) {
	testInteger();
	testString();
	return (0);
}
