/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:42:13 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/02 15:57:36 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(){}

HumanB::HumanB(std::string name) : name(name), weaponB(NULL)
{
}

void HumanB::attack()
{
	std::cout << this->name << " attackes with their " << this->weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->weaponB = &Weapon;
}
