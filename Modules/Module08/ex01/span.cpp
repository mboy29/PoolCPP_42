/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:45:58 by mboy              #+#    #+#             */
/*   Updated: 2022/01/19 09:45:59 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// Constructor

Span::Span(void): _N(0) {}

Span::Span(unsigned const& N): _N(N) {}

//Constructor by Copy

Span::Span(Span const& cpy) {
	*this = cpy;
}

// Destructor

Span::~Span(void) {};

// Exceptions

const char*		Span::UnsuccessfulAddException::what() const throw() {
	return ("[ ERROR ]: Tab saturated, element can't be added.");
}

const char*		Span::ImpossibleSpanException::what() const throw() {
	return ("[ SUCCES ]: Too few elements, can't find span !.");
}

// Member Function

int		Span::getN(void) const {
	return (this->_N);
}

void	Span::viewTab(void) {
	
	for (int idx = 0; idx < this->getN(); idx += 1)
		std::cout << "[ LIST ][" << idx << "] = " << this->_tab[idx] << std::endl;
}

void	Span::addNumber(unsigned const& add) {
	if (this->_tab.size() >= this->_N)
		throw Span::UnsuccessfulAddException();
	this->_tab.push_back(add);
}

int		Span::shortestSpan(void) {
	if (this->_tab.size() < 2)
		throw Span::ImpossibleSpanException();
	return (*std::min_element(this->_tab.begin(), this->_tab.end()));
}

int		Span::longestSpan(void) {
	if (this->_tab.size() < 2)
		throw Span::ImpossibleSpanException();
	return (*std::max_element(this->_tab.begin(), this->_tab.end()));
}

//Operator=

Span&	Span::operator=(Span const& op) {
	if (this != &op) {
		this->_N = op.getN();
		this->_tab = op._tab;
	}
	return (*this);
}
