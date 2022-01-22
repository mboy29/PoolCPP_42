/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:34:53 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:34:54 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public:
		virtual	~Base(void) {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);

void	identify(Base* p);

void	identify(Base& p);
int		identifyA(Base& p);
int		identifyB(Base& p);
int		identifyC(Base& p);

#endif
