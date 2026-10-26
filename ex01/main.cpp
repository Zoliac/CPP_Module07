/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:32:03 by leny              #+#    #+#             */
/*   Updated: 2026/10/26 11:56:26 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printsize(std::string str) {
	std::cout << str.length() << std::endl;
}

int main() {
	std::string	array[] = {"hi what's up ?", "oe la famille", "oui"};
	iter(array, 3, *printsize);
}