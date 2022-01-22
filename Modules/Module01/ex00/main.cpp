/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:15:15 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:15:16 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void) {
	std::cout << "--> Creating NewZombie... " << std::endl;
	Zombie*	newZombieTest = newZombie("NewZombieTest");
	newZombieTest->announce();
	delete newZombieTest;

	std::cout << std::endl << " --> Creating RandomChup... " << std::endl;
	randomChump("RandomChumpTest");
	return (0);
}
