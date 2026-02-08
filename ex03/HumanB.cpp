/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:08:17 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/08 16:46:55 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {};

void	HumanB::setWeapon(Weapon& w) 
{
	weapon = &w;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attack with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}