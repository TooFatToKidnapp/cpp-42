/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:18:12 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/05 19:28:12 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int var)
{
	this->value = var;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float var)
{
	this->f = var;
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &var)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = var.value;
	return(*this);
}

