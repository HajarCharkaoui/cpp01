/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacement.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:04:36 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/10 16:38:52 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEMENT_H
#define REPLACEMENT_H

#include <iostream>
#include <fstream>
#include <string>

class Replacement
{
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
	public:
		Replacement(std::string filename, std::string s1, std::string s2);
		~Replacement();
		void	replace();
		
};
#endif