/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:53:09 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/04 13:10:45 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string name[] = {"Zombie01", "Zombie02", "Zombie03", "Zombie04"};

int main()
{
	int i(0);

	Zombie stackZombie("StackZombie");
	stackZombie.announce();
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;
	while (i < 4)
	{
		randomChump(name[i]);
		i++;
	}
	return 0;
}
