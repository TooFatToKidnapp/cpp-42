/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:50:43 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/16 20:31:50 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap fighter1("BRUH");
	ClapTrap fighter2("yo");
	fighter1.attack("yo");
	fighter2.beRepaired(2);

}
