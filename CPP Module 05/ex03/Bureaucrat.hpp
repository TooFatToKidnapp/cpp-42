/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:36:34 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 17:46:47 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string		name;
		unsigned int	grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string &name, unsigned int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);

		std::string getName() const;
		unsigned int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form& form);
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out ,const Bureaucrat &var);

#endif
