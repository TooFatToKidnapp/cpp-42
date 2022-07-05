/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:43:13 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/05 19:20:48 by aabdou           ###   ########.fr       */
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
		float	f;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed( const int var);
		Fixed( const float var);
		Fixed& operator=(const Fixed &var);
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif
