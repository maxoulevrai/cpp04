/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:53:00 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 14:53:03 by maleca           ###   ########.fr       */
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

		void	setType(const std::string type);
		std::string getType(void) const;
		void	makeSound(void);
};

#endif