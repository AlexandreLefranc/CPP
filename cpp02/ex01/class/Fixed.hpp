/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:30:55 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/12 13:14:53 by alefranc         ###   ########.fr       */
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
	Fixed(Fixed const &fixed);
	Fixed(int const val);
	Fixed(float const val);

	~Fixed();

	Fixed			&operator=(Fixed const &fixed);

	int		getRawBits() const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int		toInt() const;

	static int		getBinaryPointPos() const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif
