/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:44:01 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/13 14:50:43 by alex             ###   ########.fr       */
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
	WrongAnimal(const WrongAnimal& src);

	// Destructors
	~WrongAnimal();

	// Operator overload
	WrongAnimal&	operator=(const WrongAnimal& rhs);

	// Accessors
	const std::string&	getType() const;
	void				setType(const std::string& type);

	// Member functions
	void	makeSound() const;

};

std::ostream&	operator<<(std::ostream& o, const WrongAnimal& obj);

#endif
