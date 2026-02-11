/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:25:59 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/11 13:47:47 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"


void	Harl::debug(void)
{
	std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << " This is unacceptable! I want to speak to the manager now." << std::endl;
}

Level	mylevel(std::string lvl)
{
	if (lvl == "DEBUG")
		return DEBUG;
	else if (lvl == "INFO")
		return INFO;
	else if (lvl =="WARNING")
		return WARNING;
	else if (lvl == "ERROR")
		return ERROR;
	else 
		return UNKNOWN;
}

void	Harl::complain(std::string level)
{
	Level	exp = mylevel(level);
	switch (exp)
	{
		case DEBUG:
			debug();
			break;
		case INFO:
			info();
			break;
		case WARNING:
			warning();
			break;
		case ERROR:
			error();
			break;
		default:
			std::cerr << "Usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
			break;
	}
}
