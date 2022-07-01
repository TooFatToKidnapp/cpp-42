/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:10:58 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/01 16:47:31 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHord(int N, std::string name)
{
	Zombie	*tab_Z = new Zombie[N];
	std::stringstream	ss;

	for (int i = 0; i < N; i++)
	{
		ss << i;
		tab_Z[i].setName(name + ss.str());
		tab_Z[i].announce();
		ss.str("");
	}
	return tab_Z;
}
