/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:47:10 by codespace         #+#    #+#             */
/*   Updated: 2026/07/12 03:21:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain;
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
    delete this->_brain;
}

const Brain   Cat::getBrain(void) const{
    return (*this->_brain);
}

void    Cat::setBrain(const Brain &brain) {
    *this->_brain = brain;
}

void    Cat::makeSound(void) const {
    std::cout << "Miaou" << std::endl;
}
