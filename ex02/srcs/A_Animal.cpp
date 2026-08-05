/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:13 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 14:54:15 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal() : _type("pokemonEgg") {
	std::cout << "Default A_Animal constructor called" << std::endl;
}

A_Animal::A_Animal(std::string name) : _type(name) {
	std::cout << "A_Animal name constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal& other) : _type(other._type) {
	std::cout << "A_Animal copy constructor called" << std::endl;
}

A_Animal &A_Animal::operator=(const A_Animal& other) {
	std::cout << "A_Animal copy assignement constructor called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

A_Animal::~A_Animal() {
	std::cout << "A_Animal destructor called" << std::endl;
}

std::string A_Animal::getType(void) const {
	return (this->_type);
}

void	A_Animal::setType(const std::string type) {
	this->_type = type;
}

void	A_Animal::makeSound(void) const {
	std::cout << "Sounds can be heard coming from inside! It will hatch soon!" << std::endl;
}
