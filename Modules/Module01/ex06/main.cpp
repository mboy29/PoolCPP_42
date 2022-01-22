/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:19:35 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:19:37 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char **av) {
	Karen		karenTest;

	if (ac != 2) {
		std::cout << "[ERROR]: Usage ./karenFilter argument" << std::endl;
		return (1);
	}
	karenTest.complain(av[1]);
	return (0);
}
