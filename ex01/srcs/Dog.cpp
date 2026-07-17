/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:28 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 17:52:22 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Default Dog constructor called" << std::endl;
	this->_veaucer = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copy construtor called" << std::endl;
}

Dog &Dog::operator=(const Dog& other) {
	std::cout << "Dog copy assignement constructor called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << this->_type << ": Waff" << std::endl;
}

Brain	&Dog::getBrain() const {
	return (*this->_veaucer);
}
