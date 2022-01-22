/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:31:56 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:31:57 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//Constructor

PresidentialPardonForm::PresidentialPardonForm(void) : Form("default", 25, 5) {
	this->_signed = false;
	this->setTarget("default");
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& name): Form(name, 25, 5) {
	this->_signed = false;
	this->setTarget(this->getName());
}

//Constructor par Copy

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) {
	*this = cpy;
}

//Destructor

PresidentialPardonForm::~PresidentialPardonForm(void) {};

//Exception

const char*				PresidentialPardonForm::RequestDeclined::what() const throw() {
	return ("[ ERROR ]: Presidential pardon form declined.");
}

const char*				PresidentialPardonForm::RequestApprouved::what() const throw() {
	return ("[ SUCCES ]: Presidential pardon form approuved.");
}


//Member Function

void					PresidentialPardonForm::setTarget(std::string const& target) {
	this->_target = target;
}

std::string const&		PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

void				PresidentialPardonForm::execute(Bureaucrat const& executor) {
	if (this->getSigned() == false)
		throw PresidentialPardonForm::RequestDeclined();
	else if (executor.getGrade() > this->getExecGrade()) {
		std::cout << executor.getGrade() << " - " << this->getExecGrade() << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	else {
		std::cout << "[ SUCCESS ]: " << this->getTarget() << " was pardonned by Zafod Beeblebrox." << std::endl;
		throw PresidentialPardonForm::RequestApprouved();
	}
}

//Operator Equal

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &op) {
	if (this != &op) {
		this->_signed = op._signed;
		this->setTarget(op.getTarget());
	}
	return (*this);
}
