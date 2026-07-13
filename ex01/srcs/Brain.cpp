/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:13:22 by maleca            #+#    #+#             */
/*   Updated: 2026/07/13 04:56:23 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destuctor called" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain copy assignement constructor called" << std::endl;
    if (this != &other)
        this->_Ideas = other._Ideas;
    return (*this);
}

const std::string    &Brain::getIdea(const int idx) const {
    return (this->_Ideas[idx]);
}

void            Brain::setIdea(const std::string &idea, const int &idx) {
    
}
