/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:32:21 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:32:22 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFROM_HPP
# define SHRUBBERYCREATIONFROM_HPP
# include <iostream>
# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string const& name);
        ShrubberyCreationForm(ShrubberyCreationForm const& cpy);
        ~ShrubberyCreationForm(void);

        ShrubberyCreationForm&  operator=(ShrubberyCreationForm const& op);
        void                    setTarget(std::string const& target);
        std::string const&      getTarget(void) const;
        void                    execute(Bureaucrat const& executor);

        class CreationDeclined: public std::exception {
            public:
                const char* what() const throw();
        };
        class CreationApprouved : public std::exception {
            public:
                const char* what() const throw();
        };

    private:
        std::string             _target;
};

#endif
