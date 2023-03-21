#include <exception>
#include <iostream>

class A
{
public:
    void throw_except(int i)
    {
        if (i == 0)
            throw(A::TooLowException());
        else if (i == 1)
            throw(A::TooHighException());
        else if (i == 2)
            throw(std::exception());
    }

    void    function(int i)
    {
        try
        {
            if (i > 100)
                throw(A::TooLowException());
            std::cout << "OK" << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cout << "i is greater than 100 so it is not OK because" << e.what() << std::endl;
        }
    }

private:
    class TooLowException: public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Too Low";
        }
    };

    class TooHighException: public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Too High";
        }
    };
};

int main()
{
    A instance;

    // try
    // {
    //     instance.throw_except(2);
    // }
    // catch (const std::exception& e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    instance.function(101);
    return 0;
}