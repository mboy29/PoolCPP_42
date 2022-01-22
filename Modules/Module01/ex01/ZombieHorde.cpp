/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:15:41 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:15:42 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* 	zombieHorde(int N, std::string name) {
	Zombie*	zombieHorde = new Zombie[N];

	for (int idx = 0; idx < N; idx += 1) {
		std::string cpy = name;
		zombieHorde[idx].nameZombie(cpy += std::to_string(idx));
		zombieHorde[idx].announce();
	}
	return (zombieHorde);
}

void	zombieHordDelete(Zombie* zombieHorde) {
	delete [] zombieHorde;
}
