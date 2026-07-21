/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:33 by maleca            #+#    #+#             */
/*   Updated: 2026/07/21 15:58:57 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

int main()
{
	std::cout << std::endl << "--- Array of Animals test ---" << std::endl;
	
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
				dog->getBrain().setIdea("oe", 0);
				std::cout << "animalArray[" << i << "] idea: " << dog->getBrain().getIdea(0) << std::endl;
				continue ;
			}
		}
		else
		{
			Cat* cat = dynamic_cast<Cat*>(animalArray[i]);
			if (cat)
			{
				cat->getBrain().setIdea("oe", 0);
				std::cout << "animalArray[" << i << "] idea: " << cat->getBrain().getIdea(0) << std::endl;
				continue ;
			}
		}
	}
	
	for (int i = 0; i < arraySize; ++i)
	{
		delete animalArray[i];
	}

	return 0;
}