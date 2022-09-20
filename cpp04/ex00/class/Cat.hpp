/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/20 15:33:29 by alefranc         ###   ########.fr       */
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
	Cat(const Cat& src);

	// Destructors
	virtual ~Cat();

	// Operator overload
	Cat &	operator=(const Cat& rhs);

	// Accessors

	// Member functions
	virtual void	makeSound() const;

};

std::ostream&	operator<<(std::ostream& o, const Cat& obj);

#endif
