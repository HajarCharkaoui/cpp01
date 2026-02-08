/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:08:11 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/08 17:22:59 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {};

void	HumanA::attack()
{
	std::cout << name << " attack with their " << weapon.getType() << std::endl;
}