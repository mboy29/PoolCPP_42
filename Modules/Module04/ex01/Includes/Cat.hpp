/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:25:36 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:25:38 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : virtual public Animal{
    public:
        Cat(void);
        Cat(Cat const& cpy);
        ~Cat(void);

        Cat&        operator=(Cat const& op);
        void        makeSound(void) const;
        Brain*      getBrain(void) const ;
    private:
        Brain*  _brain;
};

#endif
