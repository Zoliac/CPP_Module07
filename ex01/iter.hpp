/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leny <leny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:32:10 by leny              #+#    #+#             */
/*   Updated: 2026/10/06 09:32:20 by leny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>

template<typename T, typename F>
void	iter(T *array, int len, F func)
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}