/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:29:29 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:29:30 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Constructor

Bureaucrat::Bureaucrat(std::string const& name) : _name(name) {
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(std::string const& name, int const& grade) : _name(name) {
	this->setGrade(grade);
}

//Constructor by Copy

Bureaucrat::Bureaucrat(Bureaucrat const& cpy) : _name(cpy.getName()) {
	*this = cpy;
}

//Destructor

Bureaucrat::~Bureaucrat(void) {};

//Member functions

std::string const&	Bureaucrat::getName(void) const {
	return (this->_name);
}

int const&			Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void				Bureaucrat::setGrade(int const& grade) {
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}


void				Bureaucrat::incrementGrade(void) {
	this->setGrade(this->getGrade() - 1);
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
}

void				Bureaucrat::decrementGrade(void) {
	this->setGrade(this->getGrade() + 1);
	if (this->getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
		
}

//Exceptions

const char*			Bureaucrat::GradeTooLowException::what() const throw() {
	return ("[ ERROR ]: Grade too low.");
}

const char*			Bureaucrat::GradeTooHighException::what() const throw() {
	return ("[ ERROR ]: Grade too high.");
}

//Operator Equal Function

Bureaucrat&			Bureaucrat::operator=(Bureaucrat const& op) {
	if (this != &op)
		this->setGrade(op.getGrade());
	return (*this);
}

//Operator Ostream Function

std::ostream&		operator<<(std::ostream& ost, Bureaucrat const& op) {
	ost << "[ INFO ]: " << op.getName() << " is a bureaucrat of grade "
		<< op.getGrade() << ".";
	return (ost);
}
