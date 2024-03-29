/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/20 15:33:34 by alefranc         ###   ########.fr       */
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
	Dog(const Dog& src);

	// Destructors
	virtual ~Dog();

	// Operator overload
	Dog&	operator=(const Dog& rhs);

	// Accessors

	// Member functions
	virtual void	makeSound() const;

};

std::ostream&	operator<<(std::ostream& o, const Dog& obj);

#endif
