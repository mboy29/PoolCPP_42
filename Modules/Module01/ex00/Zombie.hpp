/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:15:12 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:15:13 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void		nameZombie(std::string name);
		void		announce(void);
		
	private:
		std::string	_name;
};

Zombie* 	newZombie(std::string name);
void 		randomChump(std::string name);

#endif
