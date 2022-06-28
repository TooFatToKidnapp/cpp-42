/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:45:33 by aabdou            #+#    #+#             */
/*   Updated: 2022/06/28 19:24:15 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef Zombie_hpp
# define Zombie_hpp

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce( void );
		Zombie( void );
		~Zombie();
};

	void randomChump( std::string name );
	Zombie* newZombie( std::string name );

#endif
