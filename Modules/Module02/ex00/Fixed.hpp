/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:16:40 by mboy              #+#    #+#             */
/*   Updated: 2021/12/01 05:16:42 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const& instance);
		~Fixed(void);
		Fixed&	operator=(Fixed const& rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fixed;
		static const int	_bitFrac = 8;
};

#endif
