/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:32:46 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/18 14:12:07 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
#define PhoneBook_HPP
#include"Contact.hpp"

class PhoneBook
{
	private:
		Contact Info[8];
		int		i;
		void	AddContact(int i);
		void	SearchContent(int nb);
		void	PrintContent(int i);
	public:
		PhoneBook();
		~PhoneBook();
		void	Add();
		void	Search();
};


#endif
