/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:44:01 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 19:16:19 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{

private:

protected:

	std::string	type;

public:

	// Constructors
	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);

	// Destructors
	~WrongAnimal();

	// Operator overload
	WrongAnimal &	operator=(WrongAnimal const & rhs);

	// Accessors
	std::string	getType() const;
	void		setType(std::string type);

	// Member functions
	void	makeSound() const;

};

std::ostream &	operator<<(std::ostream & o, WrongAnimal const &obj);

#endif
