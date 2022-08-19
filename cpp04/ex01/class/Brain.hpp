#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{

private:

	std::string	_ideas[100];
	int			_nb_ideas;

protected:

public:

	// Constructors
	Brain();
	Brain(Brain const & src);

	// Destructors
	~Brain();

	// Operator overload
	Brain &	operator=(Brain const & rhs);

	// Accessors
	std::string const &	getIdea(unsigned int const n) const;
	void				setIdea(unsigned int n, std::string const & idea);

	int					getNbIdeas() const;
	void				setNbIdeas(int	i);

	// Member functions
	void	addIdea(std::string const & idea);
};

std::ostream &	operator<<(std::ostream & o, Brain const &obj);

#endif
