/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:46:02 by mboy              #+#    #+#             */
/*   Updated: 2022/01/19 10:17:35 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>

class Span {
	public:
		Span(void);
		Span(unsigned const& N);
		Span(Span const& cpy);
		~Span(void);

		Span&	operator=(Span const& op);
		int		getN(void) const;
		void	viewTab(void);
		void	addNumber(unsigned const& add);
		int		shortestSpan(void);
		int		longestSpan(void);

		class	UnsuccessfulAddException : public std::exception {
			public :
				const char*	what(void) const throw();
		};
		
		class	ImpossibleSpanException : public std::exception {
			public :
				const char* what(void) const throw();
		};
		 
		
	private:
		unsigned int		_N;
		std::vector<int>	_tab;
};

#endif
