/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/13 15:29:37 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{

private:

	Brain* brain;

protected:

public:

	// Constructors
	Dog();
	Dog(const Dog& src);

	// Destructors
	~Dog();

	// Operator overload
	Dog&	operator=(const Dog& rhs);

	// Accessors

	// Member functions
	virtual void	makeSound() const;

};

std::ostream&	operator<<(std::ostream& o, const Dog& obj);

#endif
