/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:08:14 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/08 15:57:05 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA
{
	private:
		std::string	name;
		Weapon&	weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack();
};

#endif