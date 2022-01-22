/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:52 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:23:53 by mboy             ###   ########.fr       */
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
