/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:52:49 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/02 20:46:09 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


int main ()
{
	std::fstream fs;
	fs.open("/Users/aabdou/Desktop/cpp-42/CPP Module 01/ex04/file1");
	std::string str;
	str = fs.get();
	std::cout << str << std::endl;
}
