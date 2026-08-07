/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:33 by maleca            #+#    #+#             */
/*   Updated: 2026/08/07 19:53:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

void	arrayTest(void)
{
	std::cout << std::endl << "#### Array of Animals test ####" << std::endl;

	const int arraySize = 4;
	Animal *animalArray[arraySize];

	for (int i = 0; i < arraySize / 2; ++i)
		animalArray[i] = new Dog();

	for (int i = arraySize / 2; i < arraySize; ++i)
		animalArray[i] = new Cat();

	for (int i = 0; i < arraySize; ++i)
	{
		std::cout << "animalArray[" << i << "] type: " << animalArray[i]->getType() << std::endl;
		std::cout << "animalArray[" << i << "] sound: ";
		animalArray[i]->makeSound();
		if (i < arraySize / 2)
		{
			Dog* dog = dynamic_cast<Dog*>(animalArray[i]);
			if (dog)
			{
				dog->getBrain().setIdea("I want to play fetch", 0);
				std::cout << "animalArray[" << i << "] idea: " << dog->getBrain().getIdea(0) << std::endl;
			}
		}
		else
		{
			Cat* cat = dynamic_cast<Cat*>(animalArray[i]);
			if (cat)
			{
				cat->getBrain().setIdea("I want to chase a mouse", 0);
				std::cout << "animalArray[" << i << "] idea: " << cat->getBrain().getIdea(0) << std::endl;
			}
		}
	}

	for (int i = 0; i < arraySize; ++i)
		delete animalArray[i];
}

void	dogCopyTest(void)
{
	std::cout << std::endl << "#### Copy of Dog test ####" << std::endl;

	Dog *d1 = new Dog();
	d1->getBrain().setIdea("Let's eat", 0);
	d1->getBrain().setIdea("Give me bone now", 1);

	Dog *d2 = new Dog(*d1);
	const bool sameBrainAddress = (&d1->getBrain() == &d2->getBrain());

	std::cout << "Original Dog idea 0: " << d1->getBrain().getIdea(0) << std::endl;
	std::cout << "Copied Dog idea 0: " << d2->getBrain().getIdea(0) << std::endl;
	d2->getBrain().setIdea("I am a copy", 1);
	std::cout << "Original Dog idea 1 after copy mutation: " << d1->getBrain().getIdea(1) << std::endl;
	std::cout << "Copied Dog idea 1 after copy mutation: " << d2->getBrain().getIdea(1) << std::endl;
	std::cout << "Deep copy verified (distinct brain instance): " << std::boolalpha << !sameBrainAddress << std::endl;

	delete d1;
	delete d2;
}

void	catCopyTest(void)
{
	std::cout << std::endl << "#### Copy of Cat test ####" << std::endl;

	Cat *c1 = new Cat();
	c1->getBrain().setIdea("Let's eat", 0);
	c1->getBrain().setIdea("I want to chase a mouse", 1);

	Cat *c2 = new Cat(*c1);
	const bool sameBrainAddress = (&c1->getBrain() == &c2->getBrain());

	std::cout << "Original Cat idea 0: " << c1->getBrain().getIdea(0) << std::endl;
	std::cout << "Copied Cat idea 0: " << c2->getBrain().getIdea(0) << std::endl;
	c2->getBrain().setIdea("I am a copy", 1);
	std::cout << "Original Cat idea 1 after copy mutation: " << c1->getBrain().getIdea(1) << std::endl;
	std::cout << "Copied Cat idea 1 after copy mutation: " << c2->getBrain().getIdea(1) << std::endl;
	std::cout << "Deep copy verified (distinct brain instance): " << std::boolalpha << !sameBrainAddress << std::endl;

	delete c1;
	delete c2;
}

int main()
{
	arrayTest();
	std::cout << std::endl << std::endl;
	dogCopyTest();
	std::cout << std::endl << std::endl;
	catCopyTest();
	std::cout << std::endl << std::endl;

	return 0;
}