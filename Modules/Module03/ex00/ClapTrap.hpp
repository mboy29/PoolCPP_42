/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 08:58:00 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 08:58:01 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string const& name);
		ClapTrap(ClapTrap const& cpy);
		~ClapTrap(void);

		ClapTrap&			operator=(ClapTrap const& op);
		void				setName(std::string const& name);
		std::string const&	getName(void) const;
		void				setHitPoints(int const& hitPoints);
		int const&			getHitPoints(void) const;
		void				setEnergyPoints(int const& energyPoints);
		int const&			getEnergyPoints(void) const;
		void				setAttackDamage(int const& attackDamage);
		int const&			getAttackDamage(void) const;
		void 				attack(std::string const& target);
		void 				takeDamage(unsigned int amount);
		void 				beRepaired(unsigned int amount);
		void				announce(void) const;

	private:
		std::string			_name;
		int					_hitPoints;
		int					_energyPoints;
		int					_attackDamage;
};

#endif
