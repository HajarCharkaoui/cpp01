/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:31:37 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/14 12:08:42 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "------Print the memory addresses------"<< std::endl;
	std::cout << "The address of string: " << &str << std::endl;
	std::cout << "The address of stringPTR: " << stringPTR << std::endl;
	std::cout << "The address of stringREF: " << &stringREF << std::endl;
	std::cout<< "--------------------------------------------------------"<<std::endl;
	std::cout << "------Print values------"<< std::endl;
	std::cout << "The value of string: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}