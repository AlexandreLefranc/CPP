/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/14 14:37:14 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{

private:

	Brain* _brain;

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
	const Brain&	getBrain();

	// Member functions
	virtual void	makeSound() const;
	void			addIdea(const std::string& idea);
	void			printIdeas() const;

};

std::ostream&	operator<<(std::ostream& o, const Dog& obj);

#endif
