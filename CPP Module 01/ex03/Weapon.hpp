/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:22:49 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/02 15:41:41 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string& getType();
		void setType(std::string new_type);
		Weapon(std::string type);
		~Weapon();

};

#endif
