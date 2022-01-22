/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:17:48 by mboy              #+#    #+#             */
/*   Updated: 2021/12/20 09:17:49 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(std::string file, std::string s1, std::string s2) {

	std::ifstream	ifs(file);

	if (s1.empty() || s2.empty ())
		std::cerr << "[ERROR]: s1 or s2 is empty." << std::endl;
	else if (ifs) {
		std::string	line = "";
		std::ofstream newfile(file + "_replace", std::ios::out);
		while(getline(ifs, line)) {
			size_t idx = 0;
			while((idx = line.find(s1, idx)) != std::string::npos) {
				line.replace(idx, s1.size(), s2);
				idx += s1.size();
			}
			newfile << line << std::endl;
		}
		newfile.close();
		ifs.close();
		std::cout << "[SUCCESS]: All accurences have ben replaced." << std::endl;
	}
	else
		std::cerr << "[ERROR]: Can't open file (" << file << ")." << std::endl;
	return;	
}
