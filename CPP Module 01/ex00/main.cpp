/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:53:09 by aabdou            #+#    #+#             */
/*   Updated: 2022/06/28 19:21:09 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string name[] = {"Zombie01", "Zombie02", "Zombie03", "Zombie04"};

int main()
{
	Zombie stackZombie = Zombie("StackZombie");
	Zombie *heapZonbie = newZombie("HeapZombie");

}
