/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:31:24 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/10 18:11:56 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{

private:

	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

public:

	Harl();
	~Harl();

	void	complain(std::string level);

};

#endif
