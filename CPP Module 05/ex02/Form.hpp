/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:57:10 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/22 14:38:59 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		unsigned int sign_grade;
		unsigned int execute_grade;
		bool signature;

	public:
		Form();
		~Form();
		Form(const std::string &name, const unsigned int sign_grede, const unsigned int execute_grede);
		Form(const Form &other);
		Form &operator=(const Form &other);

		std::string getName() const;
		unsigned int getSignGrade()const;
		unsigned int getExcuteGrade()const;
		bool getIsSigned()const;
		void beSigned(const Bureaucrat &other);


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

std::ostream &operator<<(std::ostream &out, const Form &other);

#endif
