/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:08:30 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/08 15:59:59 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB
{
	private:
		std::string	name;
		Weapon*	weapon;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& w);
		void	attack();
};

#endif