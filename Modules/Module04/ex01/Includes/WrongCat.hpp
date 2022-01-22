/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:25:48 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:25:50 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : virtual public WrongAnimal{
    public:
        WrongCat(void);
        WrongCat(WrongCat const& cpy);
        ~WrongCat(void);

        WrongCat&        operator=(WrongCat const& op);
        void            makeSound(void) const;
};

#endif
