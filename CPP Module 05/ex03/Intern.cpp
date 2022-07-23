/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:49:07 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 11:00:41 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &other) {*this = other;}

Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	return*this;
}

Form* Intern::MakeShrubbery(std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form* Intern::MakePresidential(std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::MakeRobotomy(std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::MakeForm(std::string form, std::string target)
{
	std::cout << "<< creating [" << form << "] for \"" << target << "\" " << std::endl;
	try
	{
		int num = ("shrubbery create" == form) * 1
			+ ("robotomy request" == form) * 2
			+ ("presidential pardon" == form) * 3;

		switch (num - 1)
		{
		case 0:
			std::cout << "\nIntern creates [ " << form << " ] form. This form's target is \" " << target << " \".\n";
			return new ShrubberyCreationForm(target);
			break;
		case 1:
			std::cout << "\nIntern creates [ " << form << " ] form. This form's target is \" " << target << " \".\n";
			return new RobotomyRequestForm(target);
			break;
		case 2:
			std::cout << "\nIntern creates [ " << form << " ] form. This form's target is \" " << target << " \".\n";
			return new PresidentialPardonForm(target);
			break;
		}
		throw UnknownFormExeption();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Intern cannot create [ " << form << " ] because [" << e.what() << "]" << std::endl;
		return NULL;
	}
}

const char* Intern::UnknownFormExeption::what() const throw()
{
	return "-- No matching type--";
}
