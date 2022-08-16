/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:42:12 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/16 15:35:20 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void	str_replace_inplace(std::string &str,
								std::string const from, std::string const to)
{
	size_t	found_pos;
	size_t	pos = 0;
	while (str.find(from, pos) != (size_t)-1)
	{
		found_pos = str.find(from, pos);
		str.erase(found_pos, from.size());
		str.insert(found_pos, to);

		pos = found_pos + to.size();
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Expecting 3 arguments" << std::endl;
		return (0);
	}
	if (argv[2][0] == '\0')
	{
		std::cout << "The second argument must be not empty" << std::endl;
		return (0);
	}

	std::string		infile = argv[1];
	std::ifstream	ifs(infile.c_str());
	if (ifs.is_open() == false)
	{
		std::cout << "Error: cannot open " << infile << std::endl;
		return (1);
	}

	std::string		outfile = infile + ".replace";
	std::ofstream	ofs(outfile.c_str());
	if (ofs.is_open() == false)
	{
		std::cout << "Error: cannot open " << outfile << std::endl;
		return (1);
	}

	std::string buffer;
	while (!ifs.eof())
	{
		std::getline(ifs, buffer);
		str_replace_inplace(buffer, argv[2], argv[3]);
		ofs << buffer;
		if (!ifs.eof())
		{
			ofs << std::endl;
		}
	}

	return (0);
}
