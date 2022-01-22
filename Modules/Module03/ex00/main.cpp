/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 08:58:10 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 08:59:10 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void		test(ClapTrap *bobbyClap, ClapTrap *benClap) {
	std::cout << std::endl << "--> Information on ClapTrap Before Testing..." << std::endl;
	bobbyClap->announce();
	benClap->announce();
	std::cout << std::endl << "--> Testing ClapTrap Member Function..." << std::endl;
	bobbyClap->attack(benClap->getName());
	benClap->takeDamage(10);
	benClap->beRepaired(5);
	std::cout << std::endl << "--> Information on ClapTrap After Testing..." << std::endl;
	bobbyClap->announce();
	benClap->announce();
}

int			main(void) {

	std::cout << "--> Constructing ClapTrap..." << std::endl;
	ClapTrap*	bobbyClap = new ClapTrap("Bobby");
	ClapTrap*	benClap = new ClapTrap("Ben");

	test(bobbyClap, benClap);
	std::cout << std::endl << "--> Destroying ClapTrap..." << std::endl;
	delete bobbyClap;
	delete benClap;
	return (0);
}
