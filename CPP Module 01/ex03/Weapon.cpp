/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:28:28 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/02 15:41:56 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon(){}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

const std::string &Weapon::getType(void)
{
	return (this->type);
}
