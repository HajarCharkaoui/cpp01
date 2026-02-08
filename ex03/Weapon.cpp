/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:08:37 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/08 16:52:44 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

const std::string& Weapon::getType() const
{
	return type;
}

void	Weapon::setType(std::string newtype)
{
	this->type = newtype;
}

Weapon::Weapon(std::string type) : type(type) {};

Weapon::~Weapon() {};
