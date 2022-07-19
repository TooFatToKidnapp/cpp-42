/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:01:46 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/19 16:54:41 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define CYAN "\e[36m"
#define RED "\e[31m"
#define CLEAR "\e[0m"

class Brain
{
	private:
		std::string ideas[100];
		size_t i;
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain&operator=(const Brain&other);
		std::string getIdea(unsigned int index) const ;
		int addIdea(const std::string &idea);
};

#endif
