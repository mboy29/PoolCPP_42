/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:12:47 by mboy              #+#    #+#             */
/*   Updated: 2022/01/19 09:12:49 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <list>

void	testListInt(void) {
	int				testInt[] = { 23, 12, 20, 18, 42 };
	std::list<int>	testList(testInt, testInt + sizeof(testInt) / sizeof(int));

	std::cout << "--> Testing on int list template... " << std::endl;
	std::cout << "[ EASYFIND ]: " << 23;
	if (easyfind(testList, 23) == true)
		std::cout << " found." << std::endl;
	else
		std::cout << " not found." << std::endl;
	std::cout << "[ EASYFIND ]: " << 0;
	if (easyfind(testList, 0) == true)
		std::cout << " found." << std::endl;
	else
		std::cout << " not found." << std::endl;
}

void	testArrayInt(void) {
	std::array<int, 5> testArray = { 23, 12, 20, 18, 42 }; 

	std::cout << std::endl << "--> Testing on int array template... " << std::endl;
	std::cout << "[ EASYFIND ]: " << 18;
	if (easyfind(testArray, 18) == true)
		std::cout << " found." << std::endl;
	else
		std::cout << " not found." << std::endl;
	std::cout << "[ EASYFIND ]: " << -56;
	if (easyfind(testArray, -56) == true)
		std::cout << " found." << std::endl;
	else
		std::cout << " not found." << std::endl;
}

int 	main(void) {
	testListInt();
	testArrayInt();
	return (0);
}
