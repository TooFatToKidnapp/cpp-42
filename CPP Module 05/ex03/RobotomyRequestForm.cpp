/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:00:18 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 17:22:03 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: Form(other) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->Form::operator=(other);
	target = other.target;
	return *this;
}

const std::string &RobotomyRequestForm::getTarget()const {return target;}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw(NotSignedException());
	if (executor.getGrade() > getExcuteGrade())
		throw(GradeTooLowException());
	std::cout << "beep boop beep! ";
	srand(time(0));
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " robot was created" << std::endl;
	else
		std::cout << this->getTarget() << " faild creating a robot " << std::endl;

}
