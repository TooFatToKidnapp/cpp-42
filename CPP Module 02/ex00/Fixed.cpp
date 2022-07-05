/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:53:18 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/05 18:37:15 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::bit = 8;

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &var)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = var.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &var)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = var.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}
