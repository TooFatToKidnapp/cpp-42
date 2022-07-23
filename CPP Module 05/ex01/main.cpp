/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:01:48 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 09:27:03 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int		main()
{
	std::cout << "[    Form START !    ]" << std::endl;
	Form Form0("[education bill]", 100, 70);
	Form Form1("[housing bill]", 70, 20);
	Bureaucrat Bureaucrat0("politician#1", 80);

	std::cout << std::endl;
	std::cout << Form0 << std::endl;
	std::cout << Form1 << std::endl;
	std::cout << Bureaucrat0 << std::endl;

	std::cout << "[ signForm " << Form0.getName() << " ! ]" << std::endl;
	std::cout << std::endl;
	Bureaucrat0.signForm(Form0);
	try
	{
		Form0.beSigned(Bureaucrat0);
		std::cout << std::endl;
		std::cout << Form0 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
		std::cout << Form0 << std::endl;
	}
	std::cout << std::endl;
	std::cout << "[ signForm " << Form1.getName() << " ! ]" << std::endl;
	std::cout << std::endl;
	Bureaucrat0.signForm(Form1);
	try
	{
		Form1.beSigned(Bureaucrat0);
		std::cout << std::endl;
		std::cout << Form1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
		std::cout << Form1 << std::endl;
	}
	std::cout << std::endl;
}
