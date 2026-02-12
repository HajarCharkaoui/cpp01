/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:57:32 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/11 15:29:10 by hacharka         ###   ########.fr       */
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

Zombie::Zombie(std::string name) : name(name) {};

Zombie::~Zombie()
{
	std::cout << "The zombie " << name << " was destroyed" << std::endl;
};

void	Zombie::announce()
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}