/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:51:35 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/14 11:52:47 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0) return NULL;
	Zombie* arr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		arr[i].setName(name);
	}
	return arr;
};