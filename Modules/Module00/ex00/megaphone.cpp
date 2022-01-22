/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:01:25 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:21:40 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int ac, char **av)
{
	if (ac > 1)	
	{
		for (int idx1 = 1; idx1 < ac; idx1++) 
		{
			std::string	str = av[idx1];
			for (int idx2 = 0; idx2 < (int)str.size(); idx2++)
				if (str.at(idx2) >= 97 && str.at(idx2) <= 122)
					str.at(idx2) -= 32;
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
