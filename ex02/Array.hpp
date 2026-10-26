/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:33:02 by leny              #+#    #+#             */
/*   Updated: 2026/10/26 11:52:54 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

template<typename T>
class Array {
	private:
		T *array;
		unsigned _size;
	public:
		Array() : array(NULL), _size(0) {
			this->array = new T[this->_size];
		}
		Array(unsigned int n) : _size(n) {
			this->array = new T[n]();
		}
		~Array() {
			delete [] this->array;
		}
		Array(const Array &src) : _size(src.size()){
			this->array = new T[src.size()];
			for (unsigned int i = 0; i < src.size(); i++)
				this->array[i] = src.array[i];
		}
		Array& operator=(const Array &src){
			if(this->array != NULL)
				delete[] this->array;
			if(src.size() != 0 && this != &src)
			{
				this->_size = src.size();
				this->array = new T[src.size()];
				for (unsigned int i = 0; i < src.size(); i++)
					this->array[i] = src.array[i];
			}
			return(*this);
		}
		T &operator[](unsigned int index){
			if (index >= this->_size)
				throw std::exception();
			return (array[index]);
		}
		const T &operator[](unsigned int index) const{
			if (index >= this->_size)
				throw std::exception();
			return (array[index]);
		}
		unsigned int size() const {
			return (this->_size);
		}
};