/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:33 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 17:48:44 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

int main()
{
	std::cout << std::endl << "--- Array of Animals test ---" << std::endl;
	
	const int arraySize = 4;
	Animal* animalArray[arraySize];

	for (int i = 0; i < arraySize / 2; ++i)
		animalArray[i] = new Dog();

	for (int i = arraySize / 2; i < arraySize; ++i)
		animalArray[i] = new Cat();

	for (int i = 0; i < arraySize; ++i)
	{
		std::cout << "animalArray[" << i << "] type: " << animalArray[i]->getType() << std::endl;
		std::cout << "animalArray[" << i << "] sound: ";
		animalArray[i]->makeSound();
	}
	
	std::cout << animalArray[0].

	for (int i = 0; i < arraySize; ++i)
	{
		delete animalArray[i];
	}

	return 0;
}