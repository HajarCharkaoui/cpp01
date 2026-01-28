/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:59:23 by hacharka          #+#    #+#             */
/*   Updated: 2026/01/28 17:35:29 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	randomChump(std::string name)
{
	Zombie	obj;

	obj.setName(name);
	obj.announce();
}

// int	main()
// {
// 	randomChump("Hajar");
// 	return (0);
// }