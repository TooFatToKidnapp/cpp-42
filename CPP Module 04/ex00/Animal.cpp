/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:03:07 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/17 20:45:52 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() { std::cout << "Animal Constructor is Called" << std::endl; }

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal Constructor is Called Type = [" << type << "]" << std::endl;
}

Animal::~Animal(){ std::cout << "Animal Destructors is Called" << std::endl; }

Animal &Animal::operator=(const Animal & other)
{
	this->type = other.type;
	return *this;
}
