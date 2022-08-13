/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:30:55 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/13 17:34:19 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

private:

	int					_rawBits;

	static const int	_binaryPointPos;

public:

	Fixed();
	Fixed(Fixed const & fixed);
	Fixed(int const val);
	Fixed(float const val);

	~Fixed();

	Fixed	& operator=(Fixed const &rhs);

	bool 	operator<(Fixed const &rhs);
	bool	operator<=(Fixed const &rhs);
	bool	operator>(Fixed const &rhs);
	bool	operator>=(Fixed const &rhs);
	bool	operator==(Fixed const &rhs);
	bool	operator!=(Fixed const &rhs);

	Fixed	operator+(Fixed const &rhs);
	Fixed	operator-(Fixed const &rhs);
	Fixed	operator*(Fixed const &rhs);
	Fixed	operator/(Fixed const &rhs);

	Fixed	& operator++();
	Fixed	operator++(int);
	Fixed	& operator--();
	Fixed	operator--(int);

	int		getRawBits() const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int		toInt() const;

	static int		getBinaryPointPos();
};

std::ostream	& operator<<(std::ostream &o, Fixed const &fixed);

#endif
