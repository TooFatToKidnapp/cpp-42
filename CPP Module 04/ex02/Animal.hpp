/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:04:47 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/20 17:39:01 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define CLEAR "\e[0m"

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal(const std::string &other);

		Animal &operator=(const Animal &other);
		virtual void makeSound() const = 0;
		std::string getType(void) const ;
};

#endif
