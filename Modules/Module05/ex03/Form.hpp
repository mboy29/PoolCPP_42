/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:32:46 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:32:47 by mboy             ###   ########.fr       */
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
		virtual ~Form(void);

		Form&				operator=(Form const& op);
		std::string const&	getName(void) const;
		bool				getSigned(void) const;
		int					getSignedGrade(void) const;
		int					getExecGrade(void) const;
		void				beSigned(Bureaucrat const& bureaucrate);
		virtual void		execute(Bureaucrat const& executor) = 0;

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

	protected:
		std::string	const 	_name;
		bool				_signed;
		int	const 			_signedGrade;
		int	const			_execGrade;
};

std::ostream&		operator<<(std::ostream& ots, Form const& op);

#endif
