/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:30:21 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:30:23 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(void);
		Form(std::string const& name, int const& signedGrade, int const& execGrade);
		Form(Form const& cpy);
		~Form(void);

		Form&				operator=(Form const& op);
		std::string const&	getName(void) const;
		bool				getSigned(void) const;
		int					getSignedGrade(void) const;
		int					getExecGrade(void) const;
		void				beSigned(Bureaucrat const& bureaucrate);
		class GradeTooLowException : public std::exception {
			public:
				const char*	what(void) const throw();
		};

		class GradeTooHighException : public std::exception {
			public:
				const char*	what(void) const throw();
		};

		class SignatureDeclined : public std::exception {
			public:
				const char*	what(void) const throw();
		};
		
		class SignatureApprouved : public std::exception {
			public:
				const char*	what(void) const throw();
		};

	private:
		std::string const	_name;
		bool				_signed;
		int	const			_signedGrade;
		int	const			_execGrade;
};

std::ostream&		operator<<(std::ostream& ots, Form const& op);

#endif
