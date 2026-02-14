/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:11:18 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/14 13:10:34 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	std::cout << "--- Creating a Zombie on the HEAP ---" << std::endl;
	Zombie *zombie = newZombie("hajar");
	zombie->announce();
	delete zombie;
	std::cout << "\n--- Creating a Zombie on the STACK ---" << std::endl;
	randomChump("Tweety");
}