/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:46:58 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/22 14:56:20 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() { std::cout << "Bureaucrat Constructor is called" << std::endl; }

Bureaucrat::~Bureaucrat() { std::cout << "Bureaucrat [" << name << "] Destructor is called" << std::endl; }

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade)
{
	std::cout << "Bureaucrat Constructor called | name : " << name << ", grade : " << grade << std::endl;
	this->name = name;
	try
	{
		if (grade < 1)
			throw(GradeTooHighException());
		else if(grade > 150)
			throw (GradeTooLowException());
		this->grade = grade;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy Constructor is called"<< std::endl;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat Copy Operator is called" << std::endl;
	name = other.name;
	grade = other.grade;
	return *this;
}

unsigned int Bureaucrat::getGrade () const {return grade;}

std::string Bureaucrat::getName () const {return name;}

void Bureaucrat::incrementGrade()
{
	std::cout << "incrementGrade function is called" << std::endl;
	try
	{
		if (grade <= 1)
			throw (GradeTooHighException());
		grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

void Bureaucrat::decrementGrade()
{
	std::cout << "decrementGrade function is called" << std::endl;
	try
	{
		if (grade >= 150)
			throw (GradeTooLowException());
		grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "--Grade too high , max grade is 1--\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "--Grade too low , min grade is 150--\n";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
	out << "Bureaucrat name : " << Bureaucrat.getName() << ", grade : " << Bureaucrat.getGrade();
	return out;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "[" << name << "]" << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}

}
