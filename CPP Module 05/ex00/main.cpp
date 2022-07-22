/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:01:48 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/22 12:20:09 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int		main()
{
	std::cout << "[  Bureaucrat START !  ]" << std::endl;
	std::cout << std::endl;
	Bureaucrat test0("Bureaucrat#0", 151);
	Bureaucrat test1("Bureaucrat#1", 31);
	Bureaucrat test2("Bureaucrat#2", 0);
	Bureaucrat test3("Bureaucrat#3", 150);
	Bureaucrat test4("Bureaucrat#4", 1);
	Bureaucrat test5("Bureaucrat#5", 149);

	std::cout << std::endl;
	std::cout  << "[        INCREMENT / DECREMENT        ]" << std::endl;
	std::cout << std::endl;
	std::cout << test5 << std::endl;
	test5.incrementGrade();
	std::cout << test5 << std::endl;
	test5.decrementGrade();
	test5.decrementGrade();
	test5.decrementGrade();
	std::cout << test5 << std::endl;
	test5.incrementGrade();
	std::cout << test5 << std::endl;

	std::cout << std::endl;
	std::cout << "[   Bureaucrat BYE !   ]" << std::endl;
	std::cout << std::endl;
	return 0;
}
