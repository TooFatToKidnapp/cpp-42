/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:19:30 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/01 17:35:20 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string& stringREF = var;
	std::cout << "string address:     " << &var << std::endl;
	std::cout << "pointer address:    " << stringPTR << std::endl;
	std::cout << "reference address:  " << &stringREF << std::endl;
	std::cout << "string value:       " << var << std::endl;
	std::cout << "pointer value:      " << *stringPTR << std::endl;
	std::cout << "reference value:    " << stringREF << std::endl;
}
