/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:40:18 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/22 20:25:58 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

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
		std::cout << "==== TESTING GOOD FORM CONSTRUCTORS ====" << std::endl;
		ShrubberyCreationForm	f = ShrubberyCreationForm("Truc");
		Bureaucrat	bubu = Bureaucrat("Bubu", 145);
		Bureaucrat	bobo = Bureaucrat("Bobo", 100);
		// f.execute(bubu);
		bubu.executeForm(f);
		bubu.signForm(f);
		bubu.executeForm(f);
		bobo.executeForm(f);
		// Form	f1 = ShrubberyCreationForm("B28", 20, 30);
		// Form	f2 = ShrubberyCreationForm(f1);
		// Form	f3 = ShrubberyCreationForm("C29", 150, 150);
		std::cout << f << std::endl;
		// std::cout << f1 << std::endl;
		// std::cout << f2 << std::endl;
		// std::cout << f3 << std::endl;
		// f3 = f1;
		// std::cout << f3 << std::endl;
	}
	// std::cout << std::endl;
	// {
	// 	std::cout << "==== TESTING BAD FORM CONSTRUCTORS ====" << std::endl;
	// 	try
	// 	{
	// 		Form	f = Form("Z54", 50, 151);
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	//
	// 	try
	// 	{
	// 		Form	f = Form("Z54", 155, 150);
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	//
	// 	try
	// 	{
	// 		Form	f = Form("Z54", 0, 70);
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	//
	// 	try
	// 	{
	// 		Form	f = Form("Z54", 50, -5);
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << "Error: " << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// {
	// 	std::cout << "==== TESTING GOOD FORM SIGNING CONSTRUCTORS ====" << std::endl;
	// 	Bureaucrat	macron = Bureaucrat("Macron", 1);
	// 	Bureaucrat	borne = Bureaucrat("Borne", 5);
	//
	// 	Form		sendCrsForm = Form("Send CRS Form", 5, 1);
	// 	borne.signForm(sendCrsForm);
	// 	borne.signForm(sendCrsForm);
	// }
	// std::cout << std::endl;
	// {
	// 	std::cout << "==== TESTING BAD FORM SIGNING CONSTRUCTORS ====" << std::endl;
	// 	Bureaucrat	macron = Bureaucrat("Macron", 1);
	// 	Bureaucrat	borne = Bureaucrat("Borne", 5);
	//
	// 	Form		sendCrsForm = Form("Send CRS Form", 4, 1);
	// 	borne.signForm(sendCrsForm);
	// }

	return (0);
}