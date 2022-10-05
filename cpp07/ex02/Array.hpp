/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:57:52 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/05 11:06:05 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:

	T*	array;

public:

	// Constructors
	Array<T>();
	Array<T>(unsigned int n);
	Array<T>(const Array<T>& src);

	// Destructor
	~Array<T>();

	// Overload
	T&	operator=(const Array<T>& rhs);
	T&	operator[](unsigned int i);

	// Member function
	size_t	size() const;

	// Exception
	class	InvalidIndexException;

}

#endif