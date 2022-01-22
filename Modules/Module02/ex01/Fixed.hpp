/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:17:06 by mboy              #+#    #+#             */
/*   Updated: 2021/12/01 05:17:08 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const& instance);
		Fixed(int const n);
		Fixed(float const n);
		~Fixed(void);

		Fixed&			operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;


	private:
		int					_fixed;
		static const int	_bitFrac = 8;
};

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed);

#endif
