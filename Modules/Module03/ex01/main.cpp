/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 08:59:59 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:00:31 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void		test(ClapTrap *bobbyClap, ScavTrap *yonScav) {
	std::cout << std::endl << "--> Information on ClapTrap And ScavTrap Before Testing..." << std::endl;
	bobbyClap->announce();
	yonScav->announce();
	std::cout << std::endl << "--> Testing ScavTrap Member Function..." << std::endl;
	yonScav->attack(bobbyClap->getName());
	yonScav->takeDamage(100);
	yonScav->beRepaired(150);
	yonScav->guardGate();
	std::cout << std::endl << "--> Information on ClapTrap And ScavTrap After Testing..." << std::endl;
	bobbyClap->announce();
	yonScav->announce();
}

int			main(void) {
	std::cout << "--> Constructing ClapTrap And ScavTrap..." << std::endl;
	ClapTrap*	bobbyClap = new ClapTrap("Bobby");
	ScavTrap*	yonScav = new ScavTrap("Yon");
	
	test(bobbyClap, yonScav);
	std::cout << std::endl << "--> Destroying ClapTrap And ScavTrap..." << std::endl;
	delete bobbyClap;
	delete yonScav;
	return (0);
}
