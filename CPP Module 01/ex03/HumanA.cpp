/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:33:48 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/04 13:29:43 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : name(name), weaponA(Weapon) {}

void HumanA::attack(void)
{
	std::cout << this->name << " attackes with their " << this->weaponA.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weaponA = weapon;
	std::cout << &weaponA << std::endl;
}
