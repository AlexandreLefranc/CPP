/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:08:26 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/05 15:53:07 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:

	T*					_array;
	unsigned int		_size;

public:

	// Constructors
	Array<T>();
	Array<T>(unsigned int n);
	Array<T>(const Array<T>& src);

	// Destructor
	~Array<T>();

	// Overload
	Array<T>&	operator=(const Array<T>& rhs);
	T&			operator[](unsigned int i);
	const T&	operator[](unsigned int i) const;

	// Member function
	unsigned int	size() const;

	// Exception
	class	InvalidIndexException;

};

template <typename T>
class	Array<T>::InvalidIndexException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

#include "Array.tpp"

#endif