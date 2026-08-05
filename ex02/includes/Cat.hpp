/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:51:58 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 17:50:46 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CAT_HPP
#define CAT_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal {
	private:
		Brain		*_veaucer;
	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat& other);
		~Cat();

		void	makeSound(void) const;
		Brain	&getBrain() const;
};
	
#endif