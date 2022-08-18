/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 19:08:46 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{

private:

protected:

public:

	// Constructors
	Cat();
	Cat(Cat const & src);

	// Destructors
	~Cat();

	// Operator overload
	Cat &	operator=(Cat const & rhs);

	// Accessors

	// Member functions
	virtual void	makeSound() const;

};

std::ostream &	operator<<(std::ostream & o, Cat const &obj);

#endif
