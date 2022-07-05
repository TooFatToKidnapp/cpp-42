/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:00:41 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/05 18:31:02 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed
{
	private:
		int					value;
		const static int	bit;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed( const Fixed &var);
		Fixed& operator=(const Fixed &var);
		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif
