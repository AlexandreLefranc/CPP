/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:20:25 by alex              #+#    #+#             */
/*   Updated: 2022/09/20 15:34:54 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{

private:

	std::string	_ideas[100];
	int			_nb_ideas;

protected:

public:

	// Constructors
	Brain();
	Brain(const Brain& src);

	// Destructors
	virtual ~Brain();

	// Operator overload
	Brain&	operator=(const Brain& rhs);

	// Accessors
	const std::string&	getIdea(int n) const;
	int					getNbIdeas() const;

	// Member functions
	void	addIdea(const std::string& idea);
};

std::ostream&	operator<<(std::ostream& o, const Brain& obj);

#endif
