/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:45:54 by mboy              #+#    #+#             */
/*   Updated: 2022/01/19 09:45:56 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void	testAddNumber(void) {
	Span	testSpan(10000);
	srand(time(NULL));

	std::cout << "--> Testing Adding 10000 Elements to Vector..." << std::endl;
	for (int idx = 0; idx < 10000; idx += 1) {
		try { testSpan.addNumber(rand()); }
		catch (Span::UnsuccessfulAddException& exc) {
			std::cout << exc.what() << std::endl;
		}
	}
	testSpan.viewTab();
	std::cout << std::endl << "--> Testing Shortest and Longest Span Element in Vector..." << std::endl;
	try {
		std::cout << "[ SUCCESS]: Shortest element is "
			<< testSpan.shortestSpan() << "." << std::endl;
		std::cout << "[ SUCCESS]: Longest element is "
			<< testSpan.longestSpan() << "." << std::endl;
	}
	catch (Span::ImpossibleSpanException& exc) {
		std::cout << exc.what() << std::endl;
	}
}

int		main(void) {
	testAddNumber();
	return (0);
}
