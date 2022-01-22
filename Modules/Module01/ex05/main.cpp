/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:18:21 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:18:22 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void) {
	Karen		karenTest;

	std::cout << "---> Karen Test Level Debug" << std::endl;
	karenTest.complain("debug");
	std::cout << std::endl << "---> Karen Test Level Info" << std::endl;
	karenTest.complain("info");
	std::cout << std::endl << "---> Karen Test Level Warning" << std::endl;
	karenTest.complain("warning");
	std::cout << std::endl << "---> Karen Test Level Error" << std::endl;
	karenTest.complain("error");
	std::cout << std::endl << "---> Karen Test Invalid Level" << std::endl;
	karenTest.complain("invalid");
	return (0);
}
