/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:32:54 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 21:45:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << "Default Dog constructor called" << std::endl;
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

void    Dog::makeSound(void) const {
    std::cout << this->_type << ": Waff" << std::endl;
}
