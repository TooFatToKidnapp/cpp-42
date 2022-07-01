/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:45:33 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/01 14:41:54 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		void announce( void );
		Zombie( void );
		~Zombie();
		Zombie( std::string name);
	private:
		std::string name;
};
void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
