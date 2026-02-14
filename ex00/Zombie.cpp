/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:57:32 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/14 12:57:12 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << "The zombie " << name << " was destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}