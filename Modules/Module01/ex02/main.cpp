/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:15:54 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:15:56 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Address : " << &string << std::endl;
	std::cout << "Address using a pointer : " << stringPTR << std::endl;
	std::cout << "Address using a reference : " << &stringREF << std::endl << std::endl;
	
	std::cout << "String : " << string << std::endl;
	std::cout << "String using a pointer : " << *stringPTR << std::endl;
	std::cout << "String using a reference : " << stringREF << std::endl;
	return (0);
}
