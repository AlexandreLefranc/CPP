/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 19:12:24 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{

private:

protected:

public:

	// Constructors
	Dog();
	Dog(Dog const & src);

	// Destructors
	~Dog();

	// Operator overload
	Dog &	operator=(Dog const & rhs);

	// Accessors

	// Member functions
	virtual void	makeSound() const;

};

std::ostream &	operator<<(std::ostream & o, Dog const &obj);

#endif
