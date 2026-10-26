/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:28:41 by leny              #+#    #+#             */
/*   Updated: 2026/10/21 16:47:12 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename Type>
void swap(Type &a, Type &b) {
	Type tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
T const &min(T const &a, T const &b) {
	return (a < b ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b) {
	return (a > b ? a : b);
}