/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:12:50 by mboy              #+#    #+#             */
/*   Updated: 2022/01/13 11:12:51 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
    Array<int>     arrInt1(10); // Param constructor
    srand(time(NULL));
    
    //CONSTRUCTING TESTING
    std::cout << "-> Constructing interger array..." << std::endl;
    std::cout << "   Array is of size " << arrInt1.size() << std::endl; // size()
    for (unsigned int idx = 0; idx < arrInt1.size(); idx += 1)
        arrInt1[idx] = rand(); // oporator= //operator[]
    arrInt1.display(); //display

    //ASSIGNING / COPYING TESTING
    std::cout << std::endl << "-> Assigning interger array..." << std::endl;
    Array<int>      arrInt2 = arrInt1; // Copy constructor
    std::cout << "   Array is of size " << arrInt2.size() << std::endl; // size()
    arrInt1.display(); //display
    std::cout << "-> Checking for differences..." << std::endl;
    if (arrInt1.size() != arrInt2.size()) {
        std::cout << "   Array sizes are not the same, KO !" << std::endl;
        return (1);
    }
    else
        std::cout << "   Array sizes are the same, OK !" << std::endl;
    for (int idx = 0; idx < 10; idx += 1) {
        if (arrInt1[idx] != arrInt2[idx]) {
            std::cout << "    Values differ, KO!" << std::endl;
            return (1);
        }
    }
    std::cout << "   Values are identical, OK!" << std::endl << std::endl;
    
    //EXCEPTIONS TESTING
    std::cout << "-> Testing exceptions operator[-1]..." << std::endl;
    try {
        arrInt1[-1] = 0;
    }
    catch (std::exception& exc) {
        std::cout << exc.what() << std::endl;
    }
    std::cout << "-> Testing exceptions operator[12] (above array.size())..." << std::endl;
    try {
        arrInt1[12] = 0;
    }
    catch (std::exception& exc) {
        std::cout << exc.what() << std::endl;
    }
    return (0);
}
