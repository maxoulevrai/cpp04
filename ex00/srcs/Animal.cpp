/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:24:32 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 23:34:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("pokemonEgg") {
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string name) : _type(name) {
    std::cout << "Animal name constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& other) {
    std::cout << "Animal copy assignement constructor called" << std::endl;
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const {
    return (this->_type);
}

void    Animal::setType(const std::string type) {
    this->_type = type;
}


void    Animal::makeSound(void) const {
    std::cout << "Sounds can be heard coming from inside! It will hatch soon!" << std::endl;
}