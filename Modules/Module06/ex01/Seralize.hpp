/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seralize.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:34:34 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:34:37 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERALIZE_HPP
# define SERALIZE_HPP
# include <iostream>

struct Data {
	std::string		name;
	std::string		lastName;
};

Data*		initData(std::string name, std::string lastName);
uintptr_t 	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif
