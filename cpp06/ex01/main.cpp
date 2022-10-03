/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:37:58 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/03 14:52:14 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct
{
	int			data1;
	std::string	data2;
}	Data;

typedef unsigned long long int uintptr_t;

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int			main()
{
	Data*		mydata = new Data;
	uintptr_t	mydata_raw = serialize(mydata);

	std::cout << mydata << std::endl;
	std::cout << mydata_raw << std::endl;
	std::cout << deserialize(mydata_raw) << std::endl;

	delete mydata;
	return (0);
}