/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:34:49 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:34:51 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate(void) {
	int		random = 0;
	Base*	genBase = NULL;

	std::srand(std::time(0));
	random = rand() % 3;
	switch (random) {
		case 0 : genBase = new A; break;
		case 1 : genBase = new B; break;
		case 2 : genBase = new C; break;
	}
	return (genBase);
}

void	identify(Base* p) {
	std::cout << "Specified base is of type ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unkown, cats failed" << std::endl;
}

int		identifyA(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return (0);
	}
	catch (std::bad_cast& bc) {}
	return (1);
}

int		identifyB(Base& p) {
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return (0);
	}
	catch (std::bad_cast& bc) {}
	return (1);
}

int		identifyC(Base& p) {
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return (0);
	}
	catch (std::bad_cast& bc) {}
	return (1);
}

void	identify(Base& p) {
	int		(*identifyType[3])(Base&) = { identifyA, identifyB, identifyC };

	std::cout << "Specified base is of type ";
	for (int idx = 0; idx < 3; idx += 1) {
		if (identifyType[idx](p) == 0)
			return;
	}
}
