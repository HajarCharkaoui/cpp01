/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:39:45 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/08 20:00:29 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


int	main(int ac, char *av[])
{
	if (ac == 4)
	{
		std::string filename = av[1];
		std::string	text;
		std::fstream file1(av[1]);
		std::fstream file2(filename + ".replace");
		file1 << "teyehdjjdjd jejejejjdjkk,edhnbhbxjahnjahxjnxjambxajbxkas"<<"\n";
		while (std::getline(file1, text))
			file2 << text;
		// file2 << av[3] << "\n";
		std::cout << text;
		file1.close();
		file2.close();
	}
	else
		std::cout << "Invalide number of arguments!"<< std::endl;
	return (0);
}
