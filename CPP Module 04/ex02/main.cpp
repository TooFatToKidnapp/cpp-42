/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:10:31 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/21 13:59:08 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	Animal test;
	((Dog*)dog)->addBrainIdea("food!!!love!!!");
	((Dog*)dog)->addBrainIdea("play!!!fun!!!");
	((Dog*)dog)->addBrainIdea("love me!!!");
	((Dog*)dog)->addBrainIdea("");

	((Cat*)cat)->addBrainIdea("not bad");
	((Cat*)cat)->addBrainIdea("good");
	((Cat*)cat)->addBrainIdea("hmm...");
	((Cat*)cat)->addBrainIdea("don't touch me");

	unsigned int amount = 4;
	Animal*	animals[amount];
	int i;

	std::cout << "\n ============= Copy [Dog] ! ============= \n\n";

	for (i = 0; i < ((int)amount / 2); i++)
		animals[i] = new Dog(*(Dog*)dog);

	std::cout << "\n =============  Copy [Cat] ! ============= \n\n";

	for (; i < (int)amount; i++)
		animals[i] = new Cat(*(Cat*)cat);

	std::cout << "\n ================= delete ================= \n\n";
	delete dog;
	delete cat;

	std::cout << "\n =============== DEEP COPY ================ \n\n";
	for(; --i >= 0;)
	{
		if (i < ((int)amount / 2))
		{
			std::cout << GREEN;
			std::cout << animals[i]->getType() << " : " ;
			std::cout << CLEAR;
			std::cout << ((Dog*)animals[i])->getBrainIdea(i) << std::endl;
		}
		else
		{
			std::cout << GREEN;
			std::cout << animals[i]->getType() << " : " ;
			std::cout << CLEAR;
			std::cout << ((Cat *)animals[i])->getBrainIdea(i) << std::endl;
		}
	}
	std::cout << "\n ================= Bye Bye ================= \n\n";
	for(; ++i < (int)amount;)
		delete animals[i];
	//system("leaks Polymorphism");
	return 0;
}
