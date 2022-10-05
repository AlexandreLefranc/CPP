/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:15:06 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/05 10:48:45 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	{
		char	str[] = "Salut";

		std::cout << str << std::endl;
		iter<char>(str, 5, add_one<char>);
		std::cout << str << std::endl;
	}
	std::cout << std::endl;
	{
		int	tab[] = {5, 10, 15, 20};

		std::cout << tab[0] << ", " << tab[1] << ", "  << tab[2] << ", " << tab[3] << std::endl;
		iter<int>(tab, 4, add_one<int>);
		std::cout << tab[0] << ", " << tab[1] << ", "  << tab[2] << ", " << tab[3] << std::endl;
	}
	
	return (0);
}