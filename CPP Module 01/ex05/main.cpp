/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:12:58 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/03 20:45:22 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl var;

	var.complain("DEBUG");
	var.complain("INFO");
	var.complain("ERROR");
	var.complain("WARNING");
	var.complain("RANDOM TEXT");
}
