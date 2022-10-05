#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750

int	main()
{
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	std::cout << std::endl;
	{
		Array<int> a;
		Array<int> b(3);
		Array<int> c(b);

		std::cout << "b = " << b[0] << ", " << b[1] << ", " << b[2] << std::endl;
		std::cout << "c = " << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

		b[0] = 1;
		b[1] = 2;
		b[2] = 3;

		try
		{
			b[3] = 4;
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}

		std::cout << "b = " << b[0] << ", " << b[1] << ", " << b[2] << std::endl;
		std::cout << "c = " << c[0] << ", " << c[1] << ", " << c[2] << std::endl;

		int*	d = new int();
		std::cout << *d << std::endl;

		delete d;
	}
	return 0;
}