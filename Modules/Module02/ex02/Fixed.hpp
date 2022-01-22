/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:17:33 by mboy              #+#    #+#             */
/*   Updated: 2021/12/01 05:17:34 by mboy             ###   ########.fr       */
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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed&	operator=(Fixed const& op);
		Fixed	operator+(Fixed const& op);
		Fixed	operator-(Fixed const& op);
		Fixed	operator*(Fixed const& op);
		Fixed	operator/(Fixed const& op);	
		
		bool	operator<(Fixed const& comp);
		bool	operator>(Fixed const& comp);
		bool	operator<=(Fixed const& comp);
		bool	operator>=(Fixed const& comp);
		bool	operator==(Fixed const& comp);
		bool	operator!=(Fixed const& comp);

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int inc);
		Fixed	operator--(int dec);

		static Fixed&		min(Fixed& n1, Fixed& n2);
		static const Fixed&	min(Fixed const& n1, Fixed const& n2);
		static Fixed&		max(Fixed& n1, Fixed& n2);
		static const Fixed&	max(Fixed const& n1, Fixed const& n2);

	private:
		int					_fixed;
		static const int	_bitFrac = 8;
};

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed);

#endif
