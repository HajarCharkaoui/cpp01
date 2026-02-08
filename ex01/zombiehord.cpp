/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:51:35 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/07 15:29:04 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0) return nullptr;
	Zombie* arr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		arr->setName(name + "_" + std::to_string(i));
		arr->announce();
	}
	return arr;
};