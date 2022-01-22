/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:32:49 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:32:50 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//Constructor

Intern::Intern(void) {};

//Constructor by Copy

Intern::Intern(Intern const& cpy) {
	*this = cpy;
}

//Destructor

Intern::~Intern(void) {};

//Exceptions

char const*	Intern::MakeFormDeclined::what() const throw() {
	return ("[ ERROR ]: Form making decline, specified form does not exist.");
}

//Member Functions

Form*		Intern::makeForm(std::string const& formType, std::string const& formTarget) {
	std::string		formList[3] = { "Shrubbery Creation", "Robotomy Request", "Presidential Pardon" };

	for (int idx = 0; idx < 3; idx += 1) {
		if (formList[idx].compare(formType) == 0) {
			switch (idx) {
				case 0 : {
					std::cout << "[ SUCCESS ]: Shrubbery creation from making approuved." << std::endl;
					ShrubberyCreationForm* form = new ShrubberyCreationForm(formType);
					form->setTarget(formTarget);
					return (form);
				}
				case 1 : {
					std::cout << "[ SUCCESS ]: Robotomy request from making approuved." << std::endl;
					RobotomyRequestForm* form = new RobotomyRequestForm(formTarget);
					form->setTarget(formTarget);
					return (form);
				}
				case 2 : {
					std::cout << "[ SUCCESS ]: Presidential Pardon from making approuved." << std::endl;
					PresidentialPardonForm* form = new PresidentialPardonForm(formTarget);
					form->setTarget(formTarget);
					return (form);
				}
			}
		}
	}
	throw Intern::MakeFormDeclined();
	return (NULL);
}

//Operator Equal

Intern&		Intern::operator=(Intern const& op) {
	(void)op;
	return (*this);
}
