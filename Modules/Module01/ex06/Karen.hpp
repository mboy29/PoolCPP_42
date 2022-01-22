/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:19:25 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:19:30 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
# include <unistd.h>

# define RESET		"\033[0m"
# define DEBUG		"\033[34m"
# define INFO		"\033[32m"
# define WARNING	"\033[33m"
# define ERROR		"\033[31m"

class Karen {
	public:
		Karen(void);
		~Karen(void);
		void		complain(std::string level);

	private:
		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);
};


#endif
