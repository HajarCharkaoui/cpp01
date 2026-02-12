/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:51:29 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/12 15:16:05 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	Zombie *array;

	array = zombieHorde(10, "hajar");
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ": ";
		array[i].announce();
	}
	delete[] array;
}
