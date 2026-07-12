/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 23:44:57 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 23:48:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wrongCat.hpp"

wrongCat::wrongCat() {
    std::cout << "Default wrongCat constructor called" << std::endl;
    this->_type = "wrongCat";
}

wrongCat::wrongCat(const wrongCat& other) : wrongAnimal(other) {
    std::cout << "wrongCat copy constructor called" << std::endl;
    *this = other;
}

wrongCat &wrongCat::operator=(const wrongCat& other) {
    std::cout << "wrongCat copy assignment construtor called" << std::endl;
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}

wrongCat::~wrongCat() {
    std::cout << "wrongCat destructor called" << std::endl;
}

void    wrongCat::makeSound(void) {
    std::cout << "* BRUIT DE CAT *" << std::endl;
}
