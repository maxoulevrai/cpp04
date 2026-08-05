/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:33 by maleca            #+#    #+#             */
/*   Updated: 2026/07/21 15:58:57 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "includes/A_Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

// template <typename T>
// struct is_abstract
// {
// 	enum { value = __is_abstract(T) };
// };

int main()
{
	std::cout << "La classe A_Animal est abstraite: " 
			  << std::boolalpha << static_cast<bool>(__is_abstract(A_Animal))
			  << std::endl;
	std::cout << "La classe Dog est abstraite: " 
			  << std::boolalpha << static_cast<bool>(__is_abstract(Dog))
			  << std::endl;
	return 0;
}