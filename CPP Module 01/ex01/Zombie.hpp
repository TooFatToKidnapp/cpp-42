/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:08:32 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/01 16:45:40 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie( std::string name);
	~Zombie();
	void announce(void);
	void setName(std::string name);
};

Zombie* zombieHord(int N, std::string name);

#endif
