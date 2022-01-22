/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:34:14 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:34:19 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int ac, char **av) {

	if (ac != 2) {
		ac > 2 ? std::cerr << "[ ERROR ]: Too many arguments." << std::endl :
			std::cerr << "[ ERROR ]: Not enough arguments.";
		return (1);
	}
	convert(av[1]);
	return (0);
}
