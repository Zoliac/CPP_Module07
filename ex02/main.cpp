/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:32:50 by leny              #+#    #+#             */
/*   Updated: 2026/10/26 12:17:21 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include "Array.hpp"

#define MAX_VAL 1
int main() {
	std::cout << std::endl << std::endl << "Testing with int:" << std::endl;
	{
		Array<int> array = Array<int>(10);
		for (unsigned int i = 0; i < array.size(); i++) {
			std::cout << "[BEFORE] array[" << i << "] = " << array[i] << std::endl;
			array[i] += i;
			std::cout << "[AFTER] array[" << i << "] = " << array[i] << std::endl << std::endl;
		}
	}
	std::cout << std::endl << std::endl << "Testing with char:" << std::endl;
	{
		Array<char> array = Array<char>(10);
		for (unsigned int i = 0; i < array.size(); i++) {
			std::cout << "[BEFORE] array[" << i << "] = " << array[i] << std::endl;
			array[i] += (97 + i);
			std::cout << "[AFTER] array[" << i << "] = " << array[i] << std::endl << std::endl;
		}
	}
	return EXIT_SUCCESS;
}