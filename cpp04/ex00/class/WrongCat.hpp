/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:03:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/13 14:32:08 by alex             ###   ########.fr       */
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
	WrongCat(const WrongCat& src);

	// Destructors
	~WrongCat();

	// Operator overload
	WrongCat&	operator=(const WrongCat& rhs);

	// Accessors

	// Member functions
	void	makeSound() const;

};

std::ostream&	operator<<(std::ostream& o, const WrongCat& obj);

#endif
