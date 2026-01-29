/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:57:32 by hacharka          #+#    #+#             */
/*   Updated: 2026/01/29 18:48:14 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

std::string Zombie::getName() const
{
	return name;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
};

Zombie::Zombie()
{
};

Zombie::~Zombie()
{
	std::cout << "The zombie " << name << " was destroyed" << std::endl;
};

void	Zombie::announce()
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}