/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:18:22 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/19 19:55:42 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << YELLOW;
	std::cout << "Dog Constructor is Called" << std::endl;
	brain = new Brain();
	std::cout << CLEAR;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << YELLOW;
	brain = new Brain();
	*this = other;
	std::cout << "Dog Copy Constructor = [" << type << "] is called" << std::endl;
	std::cout << CLEAR;
}

Dog::~Dog()
{
	std::cout << YELLOW;
	std::cout << "Dog Destructors is Called [" << this->type << "]"<< std::endl;
	delete brain;
	std::cout << CLEAR;
}

Dog & Dog::operator=(const Dog &other)
{
	std::cout << YELLOW;
	std::cout << "Assignation operator Called" << std::endl;
	*brain = *(other.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << YELLOW;
	std::cout << "The Dog is Barking" << std::endl;
	std::cout << CLEAR;
	return;
}

Brain *Dog::getBrain()
{
	return brain;
}

std::string Dog::getBrainIdea(unsigned int index)
{
	return brain->getIdea(index);
}

int Dog::addBrainIdea(std::string idea)
{
	return brain->addIdea(idea);
}
