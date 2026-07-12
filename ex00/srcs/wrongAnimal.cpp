/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 23:32:51 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 23:42:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wrongAnimal.hpp"

wrongAnimal::wrongAnimal() {
    std::cout << "Default wrongAnimal constructor called" << std::endl;
}

wrongAnimal::wrongAnimal(const wrongAnimal& other) {
    std::cout << "wrongAnimal copy constructor called" << std::endl;
    *this = other;
}

wrongAnimal &wrongAnimal::operator=(const wrongAnimal& other) {
    std::cout << "wrongAnimal copy assignment construtor called" << std::endl;
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}

wrongAnimal::~wrongAnimal() {
    std::cout << "wrongAnimal destructor called" << std::endl;
}

void    wrongAnimal::setType(const std::string type) {
    this->_type = type;
}

std::string wrongAnimal::getType(void) const {
    return (this->_type);
}

void    wrongAnimal::makeSound(void) {
    std::cout << "* BRUIT DE CHEVAL *" << std::endl;
}
