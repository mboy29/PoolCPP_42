/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:33 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:23:34 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/Animal.hpp"
#include "Includes/Dog.hpp"
#include "Includes/Cat.hpp"
#include "Includes/WrongAnimal.hpp"
#include "Includes/WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    return (0);
}