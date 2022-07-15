/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:41:38 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/15 13:49:06 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		const static int	bit;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed( const Fixed& var);
		Fixed( const float var);
		Fixed( const int var);
		Fixed& operator=(const Fixed &var);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator>(const Fixed &var);
		bool operator<(const Fixed &var);
		bool operator>=(const Fixed &var);
		bool operator<=(const Fixed &var);
		bool operator==(const Fixed &var);
		bool operator!=(const Fixed &var);
		Fixed operator+(const Fixed &var);
		Fixed operator-(const Fixed &var);
		Fixed operator*(const Fixed &var);
		Fixed operator/(const Fixed &var);
		Fixed& operator++(); // ++var
		Fixed& operator--(); // --var
		Fixed operator++(int); // var++
		Fixed operator--(int); // var--
		static const Fixed &max(const Fixed &a, const Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &out, const Fixed &var);

#endif
