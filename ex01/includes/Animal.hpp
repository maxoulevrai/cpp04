/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:11:29 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 23:33:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal& other);
        Animal &operator=(const Animal& other);
        ~Animal();

        std::string getType(void) const;
        void    setType(const std::string type);
        virtual void    makeSound(void) const;
};

#endif