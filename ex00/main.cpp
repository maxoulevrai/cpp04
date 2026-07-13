/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 21:28:20 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 23:51:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/wrongAnimal.hpp"
#include "includes/wrongCat.hpp"

int main()
{
    std::cout << "--- Polymorphism Animal / Dog / Cat tests ---" << std::endl;

    Animal meta;
    Animal namedAnimal("Creature");
    Animal copiedAnimal(meta);
    Animal assignedAnimal;

    Dog dog;
    Dog copiedDog(dog);
    Dog assignedDog;

    Cat cat;
    Cat copiedCat(cat);
    Cat assignedCat;

    assignedAnimal = namedAnimal;
    assignedDog = dog;
    assignedCat = cat;

    const Animal* animals[] = {&meta, &dog, &cat};

    for (int index = 0; index < 3; ++index)
    {
        std::cout << "animal[" << index << "] type: " << animals[index]->getType() << std::endl;
        std::cout << "animal[" << index << "] sound: ";
        animals[index]->makeSound();
    }

    std::cout << "copiedAnimal type: " << copiedAnimal.getType() << std::endl;
    std::cout << "assignedAnimal type: " << assignedAnimal.getType() << std::endl;
    std::cout << "copiedDog type: " << copiedDog.getType() << std::endl;
    std::cout << "assignedDog type: " << assignedDog.getType() << std::endl;
    std::cout << "copiedCat type: " << copiedCat.getType() << std::endl;
    std::cout << "assignedCat type: " << assignedCat.getType() << std::endl;

    std::cout << std::endl << "--- Wrong polymorphism test ---" << std::endl;

    wrongCat wrongCatObject;
    wrongAnimal* wrongCat = &wrongCatObject;
    std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;
    std::cout << "wrongCat sound: ";
    wrongCat->makeSound();

    return 0;
}