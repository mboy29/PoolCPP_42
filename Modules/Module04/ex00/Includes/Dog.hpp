/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:45 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:23:46 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include <iostream>

class Dog : virtual public Animal{
    public:
        Dog(void);
        Dog(Dog const& cpy);
        ~Dog(void);

        Dog&        operator=(Dog const& op);
        void        makeSound(void) const;
};

#endif
