/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leny <leny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:32:03 by leny              #+#    #+#             */
/*   Updated: 2026/10/06 09:32:05 by leny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

void	printsize(std::string str)
{
	std::cout << str.length() << std::endl;
}

int	main()
{
	std::string	array[] = {"Hello", "world !", "coucou"};
	
	iter(array, 3, *printsize);
}