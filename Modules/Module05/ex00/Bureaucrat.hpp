/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:29:32 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:29:47 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(std::string const& name);
		Bureaucrat(std::string const& name, int const& grade);
		Bureaucrat(Bureaucrat const& cpy);
		~Bureaucrat(void);

		Bureaucrat&			operator=(Bureaucrat const& op);
		std::string const&	getName(void) const;
		int const&			getGrade(void) const;
		void				setGrade(int const& grade);
		void				incrementGrade(void);
		void				decrementGrade(void);

		class GradeTooLowException : public std::exception {
			public:
				const char*	what(void) const throw();
		};

		class GradeTooHighException : public std::exception {
			public:
				const char*	what(void) const throw();
		};

	private:
		std::string const&	_name;
		int					_grade;
};

std::ostream&		operator<<(std::ostream& ots, Bureaucrat const& op);

#endif
