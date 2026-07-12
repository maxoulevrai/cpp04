/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 23:30:21 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 23:37:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class wrongAnimal {
    protected:
        std::string _type;
    public:
        wrongAnimal();
        wrongAnimal(const wrongAnimal& other);
        wrongAnimal &operator=(const wrongAnimal& other);
        ~wrongAnimal();

        void    setType(const std::string type);
        std::string getType(void) const;
        void    makeSound(void);
};

#endif