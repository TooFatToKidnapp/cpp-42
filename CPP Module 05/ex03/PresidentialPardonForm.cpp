/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:47:02 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 10:22:20 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25 , 5) {}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->Form::operator=(other);
	target = other.target;
	return *this;
}

const std::string & PresidentialPardonForm::getTarget() const {return (target);}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw(NotSignedException());
	if (executor.getGrade() > getExcuteGrade())
		throw(GradeTooLowException());
	std::cout << target << "had been pardoned by Zaphod Beeblebrox." << std::endl;
}


