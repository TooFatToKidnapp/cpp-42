/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:53:13 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/22 14:45:29 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("unknown"), sign_grade(0), execute_grade(0), signature(false)
{
	std::cout << " Form constructor is called " << std::endl;
}

Form::Form(const std::string &name, const unsigned int sign_grade, const unsigned int execute_grade)
	: name(name), sign_grade(sign_grade), execute_grade(execute_grade), signature(false)
{
	std::cout << "Form constructor called | name: " << name;
	std::cout << ", required grade to sign " << sign_grade;
	std::cout << ", required grade to execute " << execute_grade << std::endl;

	try
	{
		if (sign_grade < 1 || execute_grade < 1)
			throw(GradeTooHighException());
		else if (sign_grade > 150 || execute_grade > 150)
			throw(GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

Form::~Form(){ std::cout << "Form destructor is called | " << name << std::endl; }

Form::Form(const Form &other)
	: name(other.getName()), sign_grade(other.getSignGrade()), execute_grade(other.getExcuteGrade())
{
	std::cout << "Form copy constructor is called" << std::endl;
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form copy operator is called " << std::endl;
	signature = other.signature;
	return *this;
}

std::string Form::getName()const { return name;}

unsigned int Form::getSignGrade()const { return sign_grade;}

unsigned int Form::getExcuteGrade()const { return execute_grade;}

bool Form::getIsSigned()const  {return signature;}

void Form::beSigned(const Bureaucrat &other)
{
	if (other.getGrade() <= sign_grade)
		this->signature = true;
	else
		throw (Form::GradeTooLowException());
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "--grade too high--";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "--grade too Low--";
}

std::ostream &operator<<(std::ostream &out, const Form &other)
{
	out << "[FORM]" << std::endl;
	out << "form name : " << other.getName() << std::endl;
	out << "grade sign : " << other.getSignGrade() << std::endl;
	out << "grade execute : " << other.getExcuteGrade() << std::endl;
	out << "is the form signed ? : ";
	if (other.getIsSigned())
		out << "true" << std::endl;
	else
		out << "false" << std::endl;
	return out;
}

