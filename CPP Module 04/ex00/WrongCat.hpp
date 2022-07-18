/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:26:35 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/18 20:40:43 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat
{
	private:
		std::string type;
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat & operator=(const WrongCat &other);

		WrongCat(std::string &type);
		void makeSound() const;
		void setType(std::string type);
};

#endif

