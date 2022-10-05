/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:39:18 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/05 10:58:56 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T&	min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}

template <typename T>
const T&	max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}

#endif