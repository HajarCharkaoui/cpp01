/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:14:08 by hacharka          #+#    #+#             */
/*   Updated: 2026/01/28 17:37:39 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->setName(name);
	return (zombie);
}

int	main()
{
	Zombie *obj;

	obj = newZombie("Tweety");
	obj->announce();
	obj->~Zombie();
	return (0);
}