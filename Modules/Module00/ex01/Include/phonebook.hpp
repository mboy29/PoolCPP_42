/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:01:35 by mboy              #+#    #+#             */
/*   Updated: 2021/10/25 16:01:36 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"

class Data {

	public:
		Data(void);
		~Data(void);
		void		add(Data *data);
		std::string	add_check(std::string str, int idx);
		void		search(Data *data) const;
		void		search_print(Data *data) const;
		void		search_print_index(Data *data, std::string index) const;

	private:
		unsigned int		_idx;
		std::string 		_contact[8][5];
};

int    				tool_atoi(std::string str);
std::string			tool_add_info(int idx);
std::string			tool_search_info(int idx);
void 				tool_search_print(std::string size, std::string info);

#endif
