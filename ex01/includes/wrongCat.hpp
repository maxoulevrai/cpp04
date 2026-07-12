/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 23:42:56 by codespace         #+#    #+#             */
/*   Updated: 2026/07/11 23:44:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal {
    public:
        wrongCat();
        wrongCat(const wrongCat& other);
        wrongCat &operator=(const wrongCat& other);
        ~wrongCat();

        void    makeSound(void);
};

#endif