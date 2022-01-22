/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:23:49 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:23:50 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const& cpy);
        virtual ~WrongAnimal(void);

        WrongAnimal&    operator=(WrongAnimal const& op);
        void            setType(std::string type);
        std::string     getType(void) const;
        void            makeSound(void) const;

    protected:
        std::string     _type;

};

#endif
