#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap: public ClapTrap
{

private:

protected:

public:

	// Constructors
	FragTrap();
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & src);

	// Destructors
	~FragTrap();

	// Operator overload
	FragTrap &	operator=(FragTrap const & rhs);

	// Accessors

	// Member functions
	void	highFivesGuys();

};

std::ostream &	operator<<(std::ostream & o, FragTrap const &obj);

#endif
