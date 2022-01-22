/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:32:29 by mboy              #+#    #+#             */
/*   Updated: 2022/01/19 10:32:30 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int>	mstack;
	int					elem[] = { 42, 23, 12, 18 };
	
	for (int idx = 0; idx < 4; idx += 1)
		mstack.push(elem[idx]);
	std::cout << "-> Stack size is of " << mstack.size() << std::endl;
	std::cout << "-> Stack is empty : ";
	if (mstack.empty())
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "-> Stack elements (iterator) :";
	MutantStack<int>::iterator 	it = mstack.begin();
	MutantStack<int>::iterator 	ite = mstack.end();
	while (it != ite) {
		std::cout << " " << *it;
		it += 1;
	}
	return (0);
}
