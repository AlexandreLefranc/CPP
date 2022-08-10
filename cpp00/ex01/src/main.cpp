/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:31:44 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/10 18:31:44 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myphonebook.hpp"

int	main()
{
	PhoneBook	repertoire;
	std::string	answer;

	while (true)
	{
		cout << "What to do ? (ADD, SEARCH, EXIT) ";
		getline(cin, answer);
		if (!cin)
		{
			cin.clear();
			ignoreLine();
		}
		if (cin.eof()) return (1);
		if (answer == "ADD")
		{
			repertoire.add_contact();
		}
		else if (answer == "SEARCH")
		{
			repertoire.search();
		}
		else if (answer == "EXIT")
			break;
	}

	return (0);
}
