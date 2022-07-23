/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:57:10 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 18:13:13 by aabdou           ###   ########.fr       */
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
		const unsigned int sign_grade;
		const unsigned int execute_grade;
		bool signature;

	public:
		Form();
		virtual ~Form();
		Form(const std::string &name, const unsigned int sign_grede, const unsigned int execute_grede);
		Form(const Form &other);
		Form &operator=(const Form &other);

		std::string getName() const;
		unsigned int getSignGrade()const;
		unsigned int getExcuteGrade()const;
		bool getIsSigned()const;
		void beSigned(const Bureaucrat &other);
		virtual void execute(Bureaucrat const & executor) const = 0;

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
		class NotSignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out, const Form &other);

#endif
