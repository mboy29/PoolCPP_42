/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:12:43 by mboy              #+#    #+#             */
/*   Updated: 2022/01/19 09:12:45 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>

template<typename T>
bool easyfind(T& elem, int const find) {
	for (typename T::iterator itT = elem.begin(); itT != elem.end(); itT++)
		if (*itT == find)
			return (true);
	return (false);
}

#endif
