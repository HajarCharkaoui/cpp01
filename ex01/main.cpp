/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:51:29 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/11 15:48:29 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	ll()
{
	system("leaks -q Moarbrainz");
}
int	main()
{
	atexit(ll);
	Zombie *array;

	array = zombieHorde(10, "hajar");
	delete[] array;
}
