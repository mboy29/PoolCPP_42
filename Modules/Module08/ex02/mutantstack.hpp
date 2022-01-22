/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:32:38 by mboy              #+#    #+#             */
/*   Updated: 2022/01/19 10:32:39 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack(void) {};
		virtual ~MutantStack() {};
		MutantStack(MutantStack const& cpy) { *this = cpy; }
		
		MutantStack& operator=(MutantStack const & rhs) {
			if (this != &rhs)
				this = rhs;
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return (this->c.begin()); }
		iterator end() { return (this->c.end()); }
};

#endif
