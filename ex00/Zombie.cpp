/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:57:32 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/07 18:17:28 by hacharka         ###   ########.fr       */
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

Zombie::Zombie() : name("hajar") {};

Zombie::~Zombie()
{
	std::cout << "The zombie " << this->name << " was destroyed" << std::endl;
};

void	Zombie::announce()
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}