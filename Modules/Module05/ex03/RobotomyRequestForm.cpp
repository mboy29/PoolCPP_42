/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:33:10 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:33:11 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//Constructor

//Constructor

RobotomyRequestForm::RobotomyRequestForm(void) : Form("default", 72, 45) {
	this->_signed = false;
	this->setTarget("default");
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& name): Form(name, 72, 45) {
	this->_signed = false;
	this->setTarget(this->getName());
}

//Contructor by Copy

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpy) {
	*this = cpy;
}


//Destructor

RobotomyRequestForm::~RobotomyRequestForm() {};

//Exceptions

const char*				RobotomyRequestForm::RequestDeclinedSign::what() const throw() {
	return ("[ ERROR ]: Robotomy request form declined, form not signed.");
}

const char*				RobotomyRequestForm::RequestDeclined::what() const throw() {
	return ("[ ERROR ]: Robotomy request form declined.");
}

const char*				RobotomyRequestForm::RequestApprouved::what() const throw() {
	return ("[ SUCCES ]: Robotomy request form approuved.");
}


//Member Function

void 					RobotomyRequestForm::setTarget(std::string const& target) {
	this->_target = target;
}

std::string const&		RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

void					RobotomyRequestForm::execute(Bureaucrat const& executor) {
	if (this->getSigned() == false)
		throw RobotomyRequestForm::RequestDeclinedSign();
	else if (executor.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();
	else {
		std::srand(std::time(0));
		std::cout << "[ INFO ]: ";
		for (int idx = 0; idx < 5; idx += 1)
			idx % 2 == 1 ? std::cout << "Bzeuh ! " : std::cout << "Bzeeuuuhhhh ! ";
		if (rand() % 2 == 0) {
			std::cout << std::endl << "[ SUCCESS ]: " << this->getTarget() << " form has been robotomized." << std::endl;
			throw RobotomyRequestForm::RequestApprouved();
		}
		else {
			std::cout << std::endl << "[ ERROR ]: " << this->getTarget() << " form could not be robotomized." << std::endl;
			throw RobotomyRequestForm::RequestDeclined();
		}
	}
}

//Operator Equal

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& op) {
	if (this != &op) {
		this->_signed = op._signed;
		this->setTarget(op.getTarget());
	}
	return (*this);
}
