/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:33:55 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:33:57 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <cctype>
# include <cstdlib> 

extern long double 		toConvD;
extern long int			toConvI;
extern std::string const	convertToType[4];

void		convert(std::string	const toConv);

void		convertTo(void);
void		convertToChar(void);
void		convertToInt(void);
void		convertToFloat(void);
void		convertToDouble(void);

void		convertInvalid(void);
int			convertInvalidOccurrance(std::string const conv, std::string const toFind, int toStart, int toEnd);
int			convertInvalidAlpha(std::string const conv);
int			convertInvalidNum(std::string const conv);

#endif
