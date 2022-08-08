/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:31:24 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/08 21:24:21 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>



class Harl
{
	
private:

	void	_debug();
	void	_info();
	void	_warning();
	void	_error();

public:

	Harl();
	~Harl();

	void	complain(std::string level);

};

#endif
