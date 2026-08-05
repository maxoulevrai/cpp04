/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:53:50 by maleca            #+#    #+#             */
/*   Updated: 2026/07/21 15:58:13 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_Animal_HPP
#define A_Animal_HPP

#include <string>
#include <iostream>

class A_Animal {
	protected:
		std::string _type;
	public:
		A_Animal();
		A_Animal(std::string name);
		A_Animal(const A_Animal& other);
		A_Animal &operator=(const A_Animal& other);
		virtual ~A_Animal();

		std::string getType(void) const;
		void	setType(const std::string type);
		virtual void	makeSound(void) const = 0;
};

#endif