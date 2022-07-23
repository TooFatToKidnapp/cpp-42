/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:53:02 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 17:08:00 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *var = new(std::nothrow) Zombie(name);
	if (var == nullptr)
	{
		std::cout << "faild allocation " << std::endl;
		return NULL;
	}
	return(var);
}
