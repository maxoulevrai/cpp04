/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 14:54:00 by maleca            #+#    #+#             */
/*   Updated: 2026/07/17 14:54:02 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
	private:
		std::string _Ideas[100];
	public:
		Brain();
		~Brain();
		Brain &operator=(const Brain &other);
		Brain(const Brain &other);
		
		const std::string	&getIdea(const int idx) const;
		void				setIdea(const std::string &idea, const int &idx);
};

#endif