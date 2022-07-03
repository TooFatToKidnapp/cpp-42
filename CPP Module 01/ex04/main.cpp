/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:52:49 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/03 20:24:41 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	replacestr(std::string line, std::string &new_line ,std::string s1, std::string s2)
{
	std::size_t pos = 0;

	pos = line.find(s1, 0);
	if (pos != 0)
		new_line.append(line, 0, pos);
	new_line.append(s2);
	pos += s1.length();
	line.erase(0, pos);
	if (line.find(s1) == std::string::npos)
	{
		new_line.append(line);
		return;
	}
	else
		replacestr(line, new_line , s1, s2);
}

int main (int ac, char **av)
{
	std::string file;
	std::string s1;
	std::string s2;
	std::string line;
	std::string new_line;

	if (ac != 4)
		return 0;
	file	=	av[1];
	s1		=	av[2];
	s2		=	av[3];

	std::ifstream inf(file);
	if (inf.is_open() == false)
	{
		std::cout << "Error: " << file << " not found " << std::endl;
		return 1;
	}
	if (inf.peek() == EOF)
	{
		std::cout << "Error: " << file << " is empty" << std::endl;
		return 1;
	}
	else
	{
		std::ofstream outf(file + ".replace");
		while(inf.eof() == false)
		{
			std::getline(inf, line);
			if (line.find(s1, 0) == std::string::npos)
				outf << line ;
			else
			{
				replacestr(line, new_line, s1, s2);
				outf << new_line;
				new_line.clear();
			}
			if (inf.eof() == false)
				outf << std::endl;
		}
	}
	return 0;
}
