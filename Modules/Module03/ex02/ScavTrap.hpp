/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:01:20 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:01:22 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string const& name);
		ScavTrap(ScavTrap const& cpy);
		~ScavTrap(void);

		ScavTrap&	operator=(ScavTrap const& op);
		bool const&	getGateKeeperMode(void) const;
		void		guardGate(void);
		void		announce(void) const;

	private:
		bool		_gateKeeperMode;
};

#endif
