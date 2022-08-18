/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:44:01 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 19:00:09 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{

private:

protected:

	std::string	type;

public:

	// Constructors
	Animal();
	Animal(Animal const & src);

	// Destructors
	virtual ~Animal();

	// Operator overload
	Animal &	operator=(Animal const & rhs);

	// Accessors
	std::string	getType() const;
	void		setType(std::string type);

	// Member functions
	virtual void	makeSound() const;

};

std::ostream &	operator<<(std::ostream & o, Animal const &obj);

#endif
