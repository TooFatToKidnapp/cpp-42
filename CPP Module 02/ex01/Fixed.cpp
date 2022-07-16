/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:18:12 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/16 15:25:20 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int var)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = var << bit;
}

Fixed::Fixed(const Fixed&var)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = var;
}

Fixed::Fixed( const float var)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(var * (1  << bit));
}

Fixed& Fixed::operator=(const Fixed &var)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = var.value;
	return(*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &ref)
{
	out << ref.toFloat();
	return out;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << bit));
}

int Fixed::toInt(void) const
{
	return (this->value >> bit);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl;}
