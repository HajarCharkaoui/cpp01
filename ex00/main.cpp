/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:11:18 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/08 14:32:29 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


int main()
{
	Zombie *zombie;
	zombie = newZombie("hajar");
	zombie->announce();
	zombie->~Zombie();
	delete zombie;
	// randomChump("Tweety");
}