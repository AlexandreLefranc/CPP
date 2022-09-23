/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:40:18 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/23 16:14:14 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	{
		try
		{
			std::cout << "==== TESTING GOOD CONSTRUCTORS ====" << std::endl;
			Bureaucrat	hey = Bureaucrat();
			Bureaucrat	boss = Bureaucrat("Boss", 1);
			Bureaucrat	sousmerde = Bureaucrat("Sous Merde", 150);
			Bureaucrat	moyen = Bureaucrat("Moyen", 70);
			std::cout << hey << std::endl;
			std::cout << boss << std::endl;
			std::cout << sousmerde << std::endl;
			std::cout << moyen << std::endl;
			hey = moyen;
			std::cout << hey << std::endl;
			// bob.gradeUp();
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "==== TESTING BAD CONSTRUCTORS ====" << std::endl;
		try
		{
			Bureaucrat	toohigh = Bureaucrat("Too High", 0);
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		try
		{
			Bureaucrat	toolow = Bureaucrat("Too low", 151);
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "==== TESTING CHANGE GRADE ====" << std::endl;
		try
		{
			Bureaucrat	boss = Bureaucrat("Boss", 2);
			std::cout << boss << std::endl;
			std::cout << "Grade up !" << std::endl;
			boss.gradeUp();
			std::cout << boss << std::endl;
			std::cout << "Grade up !" << std::endl;
			boss.gradeUp();
			std::cout << boss << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}

		try
		{
			Bureaucrat	nullos = Bureaucrat("Nullos", 149);
			std::cout << nullos << std::endl;
			std::cout << "Grade down !" << std::endl;
			nullos.gradeDown();
			std::cout << nullos << std::endl;
			std::cout << "Grade down !" << std::endl;
			nullos.gradeDown();
			std::cout << nullos << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "==== TESTING SHRUBBERY CREATION FORM ====" << std::endl;
		ShrubberyCreationForm	f = ShrubberyCreationForm("jardin");
		ShrubberyCreationForm	f_copy = ShrubberyCreationForm(f);
		Bureaucrat				bubu = Bureaucrat("Bubu", 145);
		Bureaucrat				bobo = Bureaucrat("Bobo", 100);
		// f.execute(bubu);
		bubu.executeForm(f);
		bubu.signForm(f);
		bubu.executeForm(f);
		bobo.executeForm(f);
		std::cout << std::endl;
		bubu.executeForm(f_copy);
		bubu.signForm(f_copy);
		bubu.executeForm(f_copy);
		bobo.executeForm(f_copy);
	}
	std::cout << std::endl;
	{
		std::cout << "==== TESTING PRESIDENTIAL PARDON FORM ====" << std::endl;
		PresidentialPardonForm	form = PresidentialPardonForm("Bidule");
		PresidentialPardonForm	form_copy = PresidentialPardonForm(form);
		Bureaucrat				macron = Bureaucrat("Macron", 6);
		Bureaucrat				borne = Bureaucrat("Borne", 26);

		std::cout << form << std::endl;
		std::cout << macron << std::endl;
		std::cout << borne << std::endl << std::endl;

		macron.executeForm(form);
		borne.signForm(form);
		borne.gradeUp();
		borne.signForm(form);
		macron.executeForm(form);
		macron.gradeUp();
		macron.executeForm(form);

		std::cout << std::endl;

		macron.executeForm(form_copy);
		borne.signForm(form_copy);
		macron.executeForm(form_copy);
	}
	std::cout << std::endl;
	{
		std::cout << "==== TESTING ROBOTOMY REQUEST FORM ====" << std::endl;
		RobotomyRequestForm		form = RobotomyRequestForm("Kelkun");
		Bureaucrat				robotomizer = Bureaucrat("Robotomizeur", 46);
		Bureaucrat				signer = Bureaucrat("Signeur", 73);

		std::cout << form << std::endl;
		std::cout << robotomizer << std::endl;
		std::cout << signer << std::endl << std::endl;

		robotomizer.executeForm(form);
		signer.signForm(form);
		signer.gradeUp();
		signer.signForm(form);
		robotomizer.executeForm(form);
		robotomizer.gradeUp();
		robotomizer.executeForm(form);

	}

	return (0);
}