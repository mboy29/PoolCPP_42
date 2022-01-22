/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:12:40 by mboy              #+#    #+#             */
/*   Updated: 2022/01/13 11:12:42 by mboy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int 	_size;
	
	public:
		Array(void) { // Default Constructor (no param, empty array)
			this->_array = new T[0];
			this->_size = 0;
		}
		Array(unsigned int i) { // Constructor (unsigned int param)
			this->_array = new T[i];
			this->_size = i;
		}
		Array(Array const & cpy) { // Constructor by Copy
			*this = cpy;
		}
		~Array(void) { // Destructor
			if (this->_size > 0)
				delete [] this->_array;
		}

		void	display(void) const { // Display Current State of Array
			for (unsigned int idx = 0; idx < this->_size; idx += 1)
				std::cout << "   [ ARRAY ][ " << idx << " ]: " << this->_array[idx] << std::endl;
		}
		unsigned int const&	size(void) const { // Return Size of Array
			return (this->_size);
		}
		Array&	operator=(Array const & op) { // Operator=
			if (this != &op) {
				if (this->_size > 0)
					delete [] this->_array;
				this->_array = new T[op._size];
				this->_size = op._size;
				for (unsigned int idx = 0; idx < op._size; idx += 1)
					this->_array[idx] = op._array[idx];
			}
			return (*this);
		}
		T& 	operator[](unsigned int idx) { // Operator[]
			if (idx >= _size || idx < 0)
				throw Array::OperatorExcep();
			return (_array[idx]);
		}
		class OperatorExcep: public std::exception { //Execption for Operator[]
			public:
				const char* what() const throw() { return ("   [ ERROR ]: Specified index not within the limit."); }
		};
};

#endif
