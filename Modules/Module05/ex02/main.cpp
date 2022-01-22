/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:32:26 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:32:27 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testShrubbery(Bureaucrat const& bureaucrat) {
	ShrubberyCreationForm	testShrubbery("ShrubberyCreation");
	
	std::cout << "---> Testing Shrubbery Creation Form..." << std::endl;
	try {
		testShrubbery.beSigned(bureaucrat);
	}
	catch (std::exception& errForm) {
		std::cout << errForm.what() << std::endl;
	}
	try {
		testShrubbery.execute(bureaucrat);
	}
	catch (std::exception& errAction) {
		std::cout << errAction.what() << std::endl;
	}
}

void	testRobotomy(Bureaucrat const& bureaucrat) {
	RobotomyRequestForm	testRobotomy("RobotomyRequest");
	
	std::cout << std::endl << "---> Testing Robotomy Request Form..." << std::endl;
	try {
		testRobotomy.beSigned(bureaucrat);
	}
	catch (std::exception& errForm) {
		std::cout << errForm.what() << std::endl;
	}
	try {
		testRobotomy.execute(bureaucrat);
	}
	catch (std::exception& errAction) {
		std::cout << errAction.what() << std::endl;
	}
}

void	testPresidential(Bureaucrat const& bureaucrat) {
	PresidentialPardonForm	testPresidential("RobotomyRequest");
	
	std::cout << std::endl << "---> Testing Robotomy Request Form..." << std::endl;
	try {
		testPresidential.beSigned(bureaucrat);
	}
	catch (std::exception& errForm) {
		std::cout << errForm.what() << std::endl;
	}
	try {
		testPresidential.execute(bureaucrat);
	}
	catch (std::exception& errAction) {
		std::cout << errAction.what() << std::endl;
	}
}

void	testBureaucrat(Bureaucrat& bureaucrat) {
	ShrubberyCreationForm	testForm("Consent");
	
	std::cout << std::endl << "---> Testing Bureaucrat Execute Form..." << std::endl;
	try {
		testForm.beSigned(bureaucrat);
	}
	catch (std::exception& errForm) {
		std::cout << errForm.what() << std::endl;
	}
	bureaucrat.executeForm(testForm);
}

int		main(void) {
	try {
		Bureaucrat	bureaucrat("Bob", 1);
		testShrubbery(bureaucrat);
		testRobotomy(bureaucrat);
		testPresidential(bureaucrat);
		testBureaucrat(bureaucrat);
	}
	catch (std::exception& exc) {
		std::cout << exc.what() << std::endl;
	}
	return (0);
}
