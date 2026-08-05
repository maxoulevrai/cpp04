/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:23 by maleca            #+#    #+#             */
/*   Updated: 2026/07/21 15:55:47 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : A_Animal("Cat"){
	std::cout << "Default Cat constructor called" << std::endl;
	this->_veaucer = new Brain();
}

Cat::Cat(const Cat& other) : A_Animal(other) {
	std::cout << "Cat copy construtor calld" << std::endl;
}

Cat &Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment constructor called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat destrutor called" << std::endl;
	delete (this->_veaucer);
}

void	Cat::makeSound(void) const {
	std::cout << this->_type << ": Miaou" << std::endl;
}

Brain	&Cat::getBrain() const {
	return (*this->_veaucer);
}
