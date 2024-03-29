/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:31:38 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/10 18:31:39 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYPHONEBOOK_HPP
# define MYPHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <cstdlib>
# include <unistd.h>

# include "PhoneBook.hpp"
# include "Contact.hpp"

using std::cout;
using std::cin;
using std::endl;

void		ignoreLine();
int			min(int a, int b);
std::string	truncate(std::string str);
std::string trim(const std::string &str);

#endif
