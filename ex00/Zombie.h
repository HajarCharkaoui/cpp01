/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:57:28 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/11 14:43:07 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		std::string	getName() const;
		void	setName(std::string name);
		Zombie(std::string name);
		~Zombie();
		void announce(void);
} ;

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif