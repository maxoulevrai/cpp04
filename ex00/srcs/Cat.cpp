/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:47:10 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 21:49:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default Cat constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
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
}

void    Cat::makeSound(void) const {
    std::cout << this->_type << ": Miaou" << std::endl;
}
