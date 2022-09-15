/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:20:18 by alex              #+#    #+#             */
/*   Updated: 2022/09/14 13:34:45 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

Brain::Brain(): _nb_ideas(0)
{
	std::cout << "Default Brain constructor called." << std::endl;
	return;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Copy Brain constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Brain&	Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
	{
		this->_nb_ideas = rhs.getNbIdeas();
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdea(i);
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Brain& obj)
{
	o << "[";
	for (int i = 0; i < obj.getNbIdeas(); i++)
		o << obj.getIdea(i) << " || ";
	o << "]";

	return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

const std::string&	Brain::getIdea(int n) const
{
	return (this->_ideas[n]);
}

int					Brain::getNbIdeas() const
{
	return (this->_nb_ideas);
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	Brain::addIdea(const std::string& idea)
{
	if (this->_nb_ideas > 100)
		std::cout << "Warning: Your brain is not big enough ! Losing ideas..." << std::endl;
	this->_ideas[this->_nb_ideas % 100] = idea;
	this->_nb_ideas++;
}
