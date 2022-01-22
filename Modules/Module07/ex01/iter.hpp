/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:35:28 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:35:30 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template< typename ARR, typename LEN > // ARR -> Any type of array // LEN -> Array size (int, size_t) 
void	iter(ARR* arr, LEN const& len, void(*f)(ARR const& func)) {
	for (LEN idx = 0; idx < len; idx += 1) {
		(*f)(arr[idx]);
	}
}

template< typename ARR >
void	viewIter(ARR const& arr) {
	std::cout << "   [ INTER ] = " << arr << std::endl;
}

#endif
