/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:50:43 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/17 15:28:59 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap fighter1("Fighter#1");
	ClapTrap fighter2;
	fighter2 = ClapTrap("Fighter#2");
	ClapTrap fighter3(fighter1);

	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	fighter1.attack("Enemy#1");
	fighter1.takeDamage(11);
	fighter1.beRepaired(5);

	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;

	fighter2.attack("Enemy#2");
	fighter2.takeDamage(4);
	fighter2.beRepaired(2);
	fighter2.takeDamage(8);

	std::cout << std::endl;
	std::cout << "[====================Round 3====================]" << std::endl;

	fighter3.attack("Enemy#3");
	fighter3.takeDamage(9);
	fighter3.beRepaired(3);

	std::cout << std::endl;

	return 0;
}
