/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:01:26 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:01:42 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void		test(FragTrap *angusFrag, ScavTrap *yonScav) {
	std::cout << std::endl << "--> Information on ScavTrap and FragTrap Before Testing..." << std::endl;
	angusFrag->announce();
	yonScav->announce();
	std::cout << std::endl << "--> Testing FragTrap Member Function..." << std::endl;
	angusFrag->attack(yonScav->getName());
	angusFrag->highFivesGuys();
	angusFrag->takeDamage(200);
	angusFrag->beRepaired(50);
	std::cout << std::endl << "--> Information on ScavTrap and FragTrap After Testing..." << std::endl;
	angusFrag->announce();
	yonScav->announce();
}

int			main(void) {
	std::cout << "--> Constructing ScavTrap and FragTrap..." << std::endl;
	ScavTrap*	yonScav = new ScavTrap("Yon");
	FragTrap*	angusFrag = new FragTrap("Angus");
	
	test(angusFrag, yonScav);
	std::cout << std::endl << "--> Destroying ScavTrap and FragTrap..." << std::endl;
	delete angusFrag;
	delete yonScav;
	return (0);
}
