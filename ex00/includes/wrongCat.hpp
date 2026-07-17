/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:53:05 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 14:53:07 by maleca           ###   ########.fr       */
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

		void	makeSound(void);
};

#endif