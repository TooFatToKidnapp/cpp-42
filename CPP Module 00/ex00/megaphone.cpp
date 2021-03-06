/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:16:54 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/22 16:07:09 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	(void)ac;
	
	while(av[i] != NULL)
	{
		j = 0;
		while(av[i][j] != '\0')
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				std::cout  << (char)toupper(av[i][j]);
			else
				std::cout << av[i][j];
			j++;
		}
		i++;
	}
	if (av[1] == NULL)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		std::cout << std::endl ;
	return 0;
}

