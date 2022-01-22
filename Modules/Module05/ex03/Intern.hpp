/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:32:53 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:32:54 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(Intern const& cpy);
		~Intern(void);

		Intern&		operator=(Intern const& op);
		Form*		makeForm(std::string const& formType, std::string const& formTarget);

		class MakeFormDeclined : public std::exception {
			public:
				char const*	what() const throw();
		};
		
};

#endif
