/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacement.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:04:39 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/10 17:38:30 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacement.h"

Replacement::Replacement(std::string filename, std::string s1, std::string s2) :
 _filename(filename) , _s1(s1) ,_s2(s2) {}

Replacement::~Replacement() {}

std::string	process(std::string text, std::string s1, std::string s2)
{
	std::string	result;
	size_t	startpos = 0;
	size_t	foundPos;

	while ((foundPos = text.find(s1, startpos)) != std::string::npos)
	{
		result += text.substr(startpos, foundPos - startpos);
		result += s2;
		startpos = foundPos + s1.length();
	}
	result += text.substr(startpos);
	return result;
}

void	Replacement::replace()
{
	std::ifstream	file1(_filename);
	std::string		text;
	std::string		newtext;

	if (!file1)
	{
		std::cerr << "File could not be opened!"<< std::endl;
		return ;
	}
	std::ofstream	file2(_filename.append(".replace"));
	if (!file2)
	{
		std::cerr << "File could not be opened!"<< std::endl;
		return ;
	}
	while (std::getline(file1, text))
	{
		newtext = process(text, _s1, _s2);
		file2 << newtext;
		if (!file1.eof())
			file2 << "\n";
	}
	file1.close();
	file2.close();
}