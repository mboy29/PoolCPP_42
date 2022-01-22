/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:24:34 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:24:35 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
    public:
        Brain(void);
        Brain(Brain const& cpy);
        ~Brain(void);

        Brain&  operator=(Brain const& op);
        void    setIdeas(std::string ideas, int idx);
        void    viewIdeas(void) const;

    private:
        std::string _ideas[100];
};

#endif
