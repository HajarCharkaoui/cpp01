/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:39:45 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/12 15:10:38 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacement.h"

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		Replacement	ob(av[1], av[2], av[3]);
		ob.replace();
	}
	else
		std::cout << "Invalide number of arguments!"<< std::endl;
	return (0);
}
