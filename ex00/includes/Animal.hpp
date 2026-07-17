/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:52:06 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 14:52:09 by maleca           ###   ########.fr       */
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
		void	setType(const std::string type);
		virtual void	makeSound(void) const;
};

#endif