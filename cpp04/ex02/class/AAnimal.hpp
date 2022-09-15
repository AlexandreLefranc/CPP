/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:44:01 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/15 18:41:43 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class AAnimal
{

private:

protected:

	std::string	type;
	AAnimal(const std::string& type);

public:

	// Constructors
	AAnimal();
	AAnimal(const AAnimal& src);

	// Destructors
	virtual ~AAnimal();

	// Operator overload
	AAnimal&	operator=(const AAnimal& rhs);

	// Accessors
	const std::string&	getType() const;
	void				setType(const std::string& type);

	// Member functions
	virtual void	makeSound() const = 0;

};

std::ostream&	operator<<(std::ostream& o, const AAnimal& obj);

#endif
