/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:01:04 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:01:05 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string const& name);
		FragTrap(FragTrap const& cpy);
		~FragTrap(void);

		FragTrap&	operator=(FragTrap const& op);
		void		announce(void) const;
		void 		highFivesGuys(void);
};

#endif
