/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:16:57 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:17:06 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const	getType(void) const;
		void				setType(std::string type) ;

	private:
		std::string	_type;
};

#endif
