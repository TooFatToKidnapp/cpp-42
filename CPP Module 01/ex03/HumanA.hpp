/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:40:46 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/01 18:43:48 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include"Weapon.hpp"

class HumanA
{
	public:
		Weapon weapon;
		HumanA();
		~HumanA();
		void attack(std::string name, std::string weapon);

};

#endif
