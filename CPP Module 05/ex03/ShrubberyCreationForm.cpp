/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:12:00 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/23 10:27:31 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145 , 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	:Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) { }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	Form::operator=(other);
	target = other.target;
	return *this;
}

const std::string &ShrubberyCreationForm::getTarget() const {return target;}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw(NotSignedException());
	if (executor.getGrade() > getExcuteGrade())
		throw(GradeTooLowException());
	std::string outfileName = target + "_shrubbery";
	std::string	tree =	"    oxoxoo    ooxoo\n";
	tree = tree + 		"  ooxoxo oo  oxoxooo\n";
	tree = tree + 		" oooo xxoxoo ooo ooox\n";
	tree = tree + 		" oxo o oxoxo  xoxxoxo\n";
	tree = tree + 		"  oxo xooxoooo o ooo\n";
	tree = tree + 		"    ooo\\oo\\  /o/o\n";
	tree = tree + 		"        \\  \\/ /\n";
	tree = tree + 		"         | T /\n";
	tree = tree + 		"         | R|\n";
	tree = tree + 		"         | E|\n";
	tree = tree + 		"         | E|\n";
	tree = tree + 		"         |:)|\n";
	tree = tree + 		"  ______/____\\____\n";
	try{
		std::ofstream	outfile(outfileName);
		outfile << tree;
		outfile.close();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
