/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:51:20 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/11 15:46:14 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

std::string	Zombie::getName() const
{
	return name;
};

Zombie::Zombie() : name("") {};
Zombie::Zombie(std::string name) : name (name) {};

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "The zombie " << name << " was destroyed!" << std::endl;
}