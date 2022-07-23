/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:42:55 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 10:48:49 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &other);
		Intern& operator=(const Intern &other);

		Form *MakeShrubbery(std::string &target);
		Form *MakeRobotomy(std::string &target);
		Form *MakePresidential(std::string &target);
		Form *MakeForm(std::string form, std::string target);
		class UnknownFormExeption : public std::exception
		{
			public:
				const char*what() const throw();
		};
};

#endif
