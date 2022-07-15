/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:22:28 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/15 13:49:15 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::bit = 8;

Fixed::Fixed(){ this->value = 0; }

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed& var)
{
	this->value = var.getRawBits();
}

Fixed::Fixed(float var)
{
	this->value = (int)roundf(var * (1 << bit));
}

Fixed::Fixed(int var)
{
	this->value = var << bit;
}

Fixed &Fixed::operator=(const Fixed &var)
{
	this->value = var.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &var)
{
	out << var.toFloat();
	return out;
}
int Fixed::getRawBits() const
{
	return this->value;
}

float Fixed::toFloat() const
{
	return ((float)this->value / (1 << bit));
}

int Fixed::toInt() const
{
	return (this->value >> bit);
}

bool Fixed::operator>(const Fixed &var)
{
	return (this->value > var.value);
}

bool Fixed::operator>=(const Fixed &var)
{
	return (this->value >= var.value);
}

bool Fixed::operator<(const Fixed &var)
{
	return (this->value < var.value);
}

bool Fixed::operator<=(const Fixed &var)
{
	return (this->value <= var.value);
}

bool Fixed::operator==(const Fixed &var)
{
	return (this->value == var.value);
}

bool Fixed::operator!=(const Fixed &var)
{
	return (this->value != var.value);
}

Fixed Fixed::operator+(const Fixed &var)
{
	return (Fixed(this->toFloat() - var.toFloat()));
}

Fixed Fixed::operator-(const Fixed &var)
{
	return (Fixed(this->toFloat() + var.toFloat()));
}

Fixed Fixed::operator*(const Fixed &var)
{
	return (Fixed(this->toFloat() * var.toFloat()));
}

Fixed Fixed::operator/(const Fixed &var)
{
	return (Fixed(this->toFloat() / var.toFloat()));
}

Fixed& Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->value--;
	return tmp;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->value++;
	return tmp;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return a;
	else
		return b;
}
