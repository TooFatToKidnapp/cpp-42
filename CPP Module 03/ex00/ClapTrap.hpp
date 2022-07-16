/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:28:25 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/16 20:26:50 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define CYAN "\e[36m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define RED "\e[31m"
#define CLEAR "\e[0m"

class ClapTrap
{
	private:
		std::string name;
		int Hit_Point;
		int Energy;
		int Attack;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap &operator=(const ClapTrap &other);
};

#endif
