/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:30:55 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/11 18:48:34 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{

private:

	int					_rawBits;
	static const int	_binaryPointPos;

public:

	Fixed();
	Fixed(Fixed const &fixed);
	Fixed	&operator=(Fixed const &fixed);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);

}

#endif
