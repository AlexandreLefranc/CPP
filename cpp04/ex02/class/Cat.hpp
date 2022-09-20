/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/20 15:35:00 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{

private:

	Brain* _brain;

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
	const Brain&	getBrain() const;

	// Member functions
	virtual void	makeSound() const;
	void			addIdea(const std::string& idea);
	void			printIdeas() const;

};

std::ostream&	operator<<(std::ostream& o, const Cat& obj);

#endif
