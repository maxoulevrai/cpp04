/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 05:22:09 by codespace         #+#    #+#             */
/*   Updated: 2026/08/05 05:58:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() : _type(NULL) {
    std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type){
    std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &other) : _type(other._type) {
    std::cout << "AM"
}

AMateria    &AMateria::operator=(AMateria const &other) {
        
}

AMateria::~AMateria() {
    std::cout << "AMateria Destructor called" << std::endl;
}


std::string const & AMateria::getType() const {
    
}
