/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:01:48 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 11:04:58 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	InternMakeForm(std::string formName, std::string target)
{
	Intern	soooh;
	Form*	form;
	form = soooh.MakeForm(formName, target);

	if (form)
	{
		std::cout << "\nResult : SUCCESS\n\n";
		std::cout << *form;
		std::cout << "\n[ Target ]\t";
		std::cout << (*(RobotomyRequestForm*)form).getTarget() << std::endl;
		delete form;
	}
	else
	{
		std::cout << "\nResult : FAIL\n";
	}
}

int		main()
{
	std::cout << "\n=================\n\n";
	InternMakeForm("shrubery Creation", "shrubery");
	std::cout << "\n=================\n\n";
	InternMakeForm("shrubbery create", "shrubery");
	std::cout << "\n=================\n\n";
	InternMakeForm("Robotomy request", "robotomy");
	std::cout << "\n=================\n\n";
	InternMakeForm("robotomy request", "robotomy");
	std::cout << "\n=================\n\n";
	InternMakeForm("Presidential pardon", "Presidential");
	std::cout << "\n=================\n\n";
	InternMakeForm("presidential pardon", "Presidential");

	return (0);
}
