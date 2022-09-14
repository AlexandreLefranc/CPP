/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:44:01 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/14 19:21:29 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{

private:

protected:

	std::string	type;
	Animal(const std::string& type);

public:

	// Constructors
	Animal();
	Animal(const Animal& src);

	// Destructors
	virtual ~Animal();

	// Operator overload
	Animal&	operator=(const Animal& rhs);

	// Accessors
	const std::string&	getType() const;
	void				setType(const std::string& type);

	// Member functions
	virtual void	makeSound() const;

};

std::ostream&	operator<<(std::ostream& o, const Animal& obj);

#endif
