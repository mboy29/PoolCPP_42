/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seralize.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:34:31 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:34:32 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seralize.hpp"

//Initialize Struct

Data*		initData(std::string name, std::string lastName) {
	Data*		data = NULL;
	
	if ((!(data = new Data)))
		return (NULL);
	data->name = name;
	data->lastName = lastName;
	return (data);
}

//Seralize Function

uintptr_t 	serialize(Data* ptr) {
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

//Deseralize Function

Data* 		deserialize(uintptr_t raw) {
	Data*	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}
