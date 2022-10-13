#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

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

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	return ;
}

template <typename T, typename Container>
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(const MutantStack<T, Container>& rhs)
{
	if (this != &rhs)
	{

	}
	return (*this);
}

template <typename T, typename Container>
const Container&	MutantStack<T, Container>::getContainer()
{
	return (this->c);
}

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
