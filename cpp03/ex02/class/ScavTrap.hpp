#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

private:

protected:

public:

	// Constructors
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);

	// Destructors
	~ScavTrap();

	// Operator overload
	ScavTrap &	operator=(ScavTrap const & rhs);

	// Accessors

	// Member functions
	void	attack(std::string const & target);
	void	guardGate();

};

std::ostream &	operator<<(std::ostream & o, ScavTrap const &obj);

#endif
