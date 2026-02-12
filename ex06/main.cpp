/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:25:52 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/12 15:10:13 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.h"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl	harl;
		std::string	level = av[1];
		harl.complain(level);
	}
	else
		std::cout<< "Invalid number of arguments!" << std::endl;
	return (0);
}