#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

// Constructors
template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	return ;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& src)
	: std::stack<T, Container>(src)
{
	return ;
}

// Destructors
template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	return ;
}

// Operator overload
template <typename T, typename Container>
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(const MutantStack<T, Container>& rhs)
{
	if (this != &rhs)
	{
		this->c = rhs.c;
	}
	return (*this);
}

// Iterators
template <typename T, typename Container>
typename Container::iterator	MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template <typename T, typename Container>
typename Container::iterator	MutantStack<T, Container>::end()
{
	return (this->c.end());
}

#endif
