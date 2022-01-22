/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:15:45 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:15:46 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void) {
	std::cout << "--> Creating ZombieHorde... " << std::endl;
	Zombie* zombietest = zombieHorde(5, "Horde");
	std::cout << "Pointer to first ZombieHorde : " << zombietest << std::endl;

	std::cout << std::endl << "--> Deleting ZombieHorde... " << std::endl;
	zombieHordDelete(zombietest);
	return (0);
}
