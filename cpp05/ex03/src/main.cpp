/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:40:18 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/25 16:58:22 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main()
{
	{
		Intern	someRandomIntern;
		Form*	form;

		form = someRandomIntern.makeForm("robotomy request", "bob");
		if (form != NULL)
			std::cout << *form << std::endl;
		delete form;
	}
	std::cout << std::endl;
	{
		Intern	someRandomIntern;
		Form*	form;

		form = someRandomIntern.makeForm("presidential pardon", "bob");
		if (form != NULL)
			std::cout << *form << std::endl;
		delete form;
	}
	std::cout << std::endl;
	{
		Intern	someRandomIntern;
		Form*	form;

		form = someRandomIntern.makeForm("shrubbery creation", "bob");
		if (form != NULL)
			std::cout << *form << std::endl;
		delete form;
	}
	std::cout << std::endl;
	{
		Intern	someRandomIntern;
		Form*	form;

		form = someRandomIntern.makeForm("unknown form", "bob");
		if (form != NULL)
			std::cout << *form << std::endl;
		delete form;
	}
	std::cout << std::endl;
	{
		Intern		someRandomIntern;
		Form*		form;
		Bureaucrat	macron = Bureaucrat("Macron", 1);

		std::cout << macron << std::endl;
		form = someRandomIntern.makeForm("presidential pardon", "bob");
		if (form != NULL)
		{
			std::cout << *form << std::endl;
			macron.executeForm(*form);
			macron.signForm(*form);
			macron.executeForm(*form);
		}
		delete form;
	}
	return (0);
}