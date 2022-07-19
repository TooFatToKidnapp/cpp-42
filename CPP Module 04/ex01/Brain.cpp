/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:55:59 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/19 17:02:09 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout  << RED;
	std::cout << "Brain Constructor is called" << std::endl;
	std::cout << CLEAR;
}

Brain::~Brain()
{
	std::cout  << RED;
	std::cout << "Brain Destructor is called" << std::endl;
	std::cout << CLEAR;
}

Brain::Brain(const Brain &other)
{
	std::cout  << RED;
	std::cout << "Brain Copy Constructor is called" << std::endl;
	std::cout << CLEAR;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout  << RED;
	std::cout << "Brain Assignment operator is called" << std::endl;
	for (i = 0; i < other.i; i++)
		ideas[i] = other.ideas[i];
	std::cout << CLEAR;
	return *this;
}

std::string Brain::getIdea(unsigned int index) const
{
	std::cout << RED;
	if (index >= 100 || ideas[index].empty() == true)
	{
		std::cout << "Wrong index" << std::endl;
		return NULL;
	}
	std::cout << CLEAR;
	return ideas[index];
}

int Brain::addIdea(const std::string &idea)
{
	if (i < 100)
	{
		idea[i] = idea;
		i++;
		return i;
	}
	std::cout << "brain is full already" << std::endl;
	return -1;
}

