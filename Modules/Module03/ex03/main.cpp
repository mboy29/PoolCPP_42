/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:03:11 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:03:28 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void		test(DiamondTrap *linkDiamond, ClapTrap *bobbyClap) {
	std::cout << std::endl << "--> Information on DiamondTrap Before Testing..." << std::endl;
	linkDiamond->announce();
	bobbyClap->announce();
	std::cout << std::endl << "--> Testing FragTrap Member Function..." << std::endl;
	linkDiamond->attack(bobbyClap->getName());
	linkDiamond->guardGate();
	linkDiamond->highFivesGuys();
	linkDiamond->whoAmI();
	linkDiamond->takeDamage(200);
	linkDiamond->beRepaired(50);
	std::cout << std::endl << "--> Information on DiamondTrap After Testing..." << std::endl;
	linkDiamond->announce();
	bobbyClap->announce();
}

int			main(void) {
	std::cout << "--> Constructing DiamondTrap..." << std::endl;
	DiamondTrap*	linkDiamond = new DiamondTrap("Link");
	ClapTrap*		bobbyClap = new ClapTrap("Bobby");

	test(linkDiamond, bobbyClap);
	std::cout << std::endl << "--> Destroying DiamondTrap..." << std::endl;
	delete linkDiamond;
	delete bobbyClap;
	return (0);
}
