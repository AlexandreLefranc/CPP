/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:15:29 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/05 10:58:29 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* tab, int size, void (*f)(T& val))
{
	for (int i = 0; i < size; i++)
	{
		f(tab[i]);
	}
}

template <typename T>
void	add_one(T& c)
{
	c = c + 1;
}

#endif