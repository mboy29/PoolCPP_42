/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:30:18 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:30:19 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Constructor

Form::Form(void) : _name("default"), _signedGrade(1), _execGrade(1) {
	if (_signedGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signedGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	else
		this->_signed = false;
}

Form::Form(std::string const& name, int const& signedGrade, int const& execGrade) : _name(name), _signedGrade(signedGrade), _execGrade(execGrade) {
	if (_signedGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signedGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	else
		this->_signed = false;
}

//Constructor by Copy

Form::Form(Form const& cpy) :_name(cpy.getName()), _signedGrade(cpy.getSignedGrade()), _execGrade(cpy.getExecGrade()) {
	*this = cpy;
}

//Destructor

Form::~Form(void) {};

//Member functions

std::string const&	Form::getName(void) const {
	return (this->_name);
}

bool				Form::getSigned(void) const {
	return (this->_signed);
}

int					Form::getSignedGrade(void) const {
	return (this->_signedGrade);
}

int					Form::getExecGrade(void) const {
	return (this->_execGrade);
}

void				Form::beSigned(Bureaucrat const& bureaucrat) {
	if (bureaucrat.getGrade() <= this->getSignedGrade()) {
		this->_signed = true;
		throw Form::SignatureApprouved();
	}
	else
		throw Form::SignatureDeclined();
}

//Exceptions

const char*			Form::GradeTooLowException::what() const throw() {
	return ("[ ERROR ]: Grade too low.");
}

const char*			Form::GradeTooHighException::what() const throw() {
	return ("[ ERROR ]: Grade too high.");
}

const char*			Form::SignatureApprouved::what() const throw() {
	return ("[ SUCCESS ]: Signature approved.");
}

const char*			Form::SignatureDeclined::what() const throw() {
	return ("[ ERROR ]: Signature declined, grade to low.");
}



//Operator Equal Function

Form&			Form::operator=(Form const& op) {
	if (this != &op)
		this->_signed = op._signed;
	return (*this);
}

//Operator Ostream Function

std::ostream&		operator<<(std::ostream& ost, Form const& op) {
	ost << "[ INFO ]: " << op.getName() << " form currently ";
	if (op.getSigned() == true)
		ost << "signed.";
	else
		ost << "not signed.";
	ost << "\n          Necessary grade to sign form : " << op.getSignedGrade();
	ost << ".\n          Necessary grade to execute form : " << op.getExecGrade() << ".";
	return (ost);
}
