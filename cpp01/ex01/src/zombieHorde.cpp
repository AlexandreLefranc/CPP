/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:20:19 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/11 16:40:46 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <sstream>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie		*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << name << i;
		horde[i].set_name(ss.str());
	}

	return (horde);
}
