/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:30:31 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:30:32 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testHighGraded(Bureaucrat& testBureaucrat1, Form& testForm1) {
	std::cout << std::endl << "--> Testing For Signature with a high enough graded bureaucrat..." << std::endl;
	std::cout << std::endl << "--> Bureaucrate Sign form..." << std::endl;
	try {
		testBureaucrat1.signForm(testForm1); // Can Sign
		std::cout << testForm1 << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
	std::cout << "--> Form being signed..." << std::endl;
	try {
		testForm1.beSigned(testBureaucrat1);
		std::cout << testForm1 << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
}

void	testLowGraded(Bureaucrat& testBureaucrat2, Form& testForm2) {
	std::cout << std::endl << "--> Testing For Signature with too low graded bureaucrat..." << std::endl;
	std::cout << std::endl << "--> Bureaucrate Sign form..." << std::endl;
	try {
		testBureaucrat2.signForm(testForm2); // Can't Sign
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
	std::cout << "--> Form being signed..." << std::endl;
	try {
		testForm2.beSigned(testBureaucrat2);
		std::cout << testForm2 << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
}

int		main(void) {
	try {
		Bureaucrat	testBureaucrat1("Mr. La Rosa", 1);
		Bureaucrat	testBureaucrat2("Mr. Boy", 150);
		Form		testForm1("Consent", 50, 150);
		Form		testForm2("Image Rigths", 50, 150);

		std::cout << "--> Bureaucrat Information..." << std::endl;
		std::cout << testBureaucrat1 << std::endl;
		std::cout << testBureaucrat2 << std::endl;
		std::cout << testForm1 << std::endl;
		testHighGraded(testBureaucrat1, testForm1);
		testLowGraded(testBureaucrat2, testForm2);
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
	return (0);
}
