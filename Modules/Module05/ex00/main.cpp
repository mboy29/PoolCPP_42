/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:30:04 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:30:05 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	test(void) {
	std::cout << "--> Testing Without Exception..." << std::endl;
	try {
		Bureaucrat	test("Bobby", 50);
		test.incrementGrade();
		std::cout << test << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
}

void	testTooHigh(void) {
	std::cout << std::endl << "--> Testing To High Exception (increment grade)..." << std::endl;
	try {
		Bureaucrat	testTooHigh("Bobby", 0);
		std::cout << testTooHigh << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
}

void	testTooLow(void) {
	std::cout << std::endl << "--> Testing To High Exception (decrement grade)..." << std::endl;
	try {
		Bureaucrat	testTooLow("Bobby", 151);
		std::cout << testTooLow << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
}

int		main(void) {
	test();
	testTooHigh();
	testTooLow();
	return (0);
}
