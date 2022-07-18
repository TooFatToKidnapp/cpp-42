/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:01:48 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/18 19:11:10 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define CYAN "\e[36m"
#define RED "\e[31m"
#define CLEAR "\e[0m"


class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal( const std::string& type );
		WrongAnimal& operator=( const WrongAnimal& other );

		void makeSound() const;
		std::string getType() const ;
};

#endif
