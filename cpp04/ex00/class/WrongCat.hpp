/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 19:22:01 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{

private:

protected:

public:

	// Constructors
	WrongCat();
	WrongCat(WrongCat const & src);

	// Destructors
	~WrongCat();

	// Operator overload
	WrongCat &	operator=(WrongCat const & rhs);

	// Accessors

	// Member functions
	void	makeSound() const;

};

std::ostream &	operator<<(std::ostream & o, WrongCat const &obj);

#endif
