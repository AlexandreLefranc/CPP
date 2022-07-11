/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:28:02 by alefranc          #+#    #+#             */
/*   Updated: 2022/07/11 12:13:59 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

static std::string	capitalize(char *s)
{
	std::string	str;

	str = s;
	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; argv[i] != NULL; i++)
	{
		str = capitalize(argv[i]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
