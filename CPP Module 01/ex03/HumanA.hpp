/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:40:46 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/04 13:30:00 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& weaponA;
	public:
		HumanA(std::string name, Weapon &weaponA);
		void attack(void);
		void setWeapon(Weapon &Weapon);

};

#endif
