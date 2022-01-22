/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:32:01 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:32:02 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &name);
		PresidentialPardonForm(PresidentialPardonForm const& cpy);
		~PresidentialPardonForm(void);

		PresidentialPardonForm&		operator=(PresidentialPardonForm const& op);
		void						setTarget(std::string const& target);
		std::string const&			getTarget(void) const;
		void						execute(Bureaucrat const& executor);

		class RequestDeclined: public std::exception {
            public:
                const char* what() const throw();
        };

        class RequestApprouved : public std::exception {
            public:
                const char* what() const throw();
        };

	private:
		std::string		_target;
};

#endif
