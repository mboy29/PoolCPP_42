/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:33:31 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:33:32 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	testMakingShrubberyCreationForm(Intern testIntern) {
	Form		*testFrom;

	std::cout << std::endl << "--> Making Shrubbery Creation Form..." << std::endl;
	try {
		testFrom = testIntern.makeForm("Shrubbery Creation", "Mr. Bens");
	}
	catch (Intern::MakeFormDeclined& exc) {
		std::cout << exc.what() << std::endl;
	}
	std::cout << *testFrom << std::endl;
	delete testFrom;
}

void	testMakingRobotomyRequestForm(Intern testIntern) {
	Form		*testFrom;

	std::cout << std::endl << "--> Making Robotomy Request Form..." << std::endl;
	try {
		testFrom = testIntern.makeForm("Shrubbery Creation", "Mr. La Rosa");
		std::cout << *testFrom << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
	delete testFrom;
}


void	testMakingPresidentialPardonForm(Intern testIntern) {
	Form		*testFrom;

	std::cout << std::endl << "--> Making Presidential Pardon Form..." << std::endl;
	try {
		testFrom = testIntern.makeForm("Presidential Pardon", "Mr. Williams");
		std::cout << *testFrom << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
	delete testFrom;
}

void	testMakingInvalidForm(Intern testIntern) {
	Form		*testFrom;

	std::cout << std::endl << "--> Making Invalied Form..." << std::endl;
	try {
		testFrom = testIntern.makeForm("Invalied", "Mr. Bens");
		std::cout << *testFrom << std::endl;
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
}

int		main(void) {
	Intern		testIntern;

	testMakingShrubberyCreationForm(testIntern);
	testMakingRobotomyRequestForm(testIntern);
	testMakingPresidentialPardonForm(testIntern);
	testMakingInvalidForm(testIntern);
	return (0);
}
