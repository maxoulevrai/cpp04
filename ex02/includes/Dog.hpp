/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:07 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 17:50:53 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal {
	private:
		Brain		*_veaucer;
	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog& other);
		~Dog();

		void	makeSound(void) const;
		Brain	&getBrain() const;
};


#endif