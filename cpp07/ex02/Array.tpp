#ifndef ARRAY_TPP
# define ARRAY_TPP

// Constructors
template <typename T>
Array<T>::Array()
	: _array(new T[0]), _size(0)
{
	return;
}

template <typename T>
Array<T>::Array(unsigned int n)
	: _array(new T[n]), _size(n)
{
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = 0;
	return;
}

template <typename T>
Array<T>::Array(const Array<T>& src)
	: _array(new T[0]), _size(0)
{
	*this = src;
	return;
}

// Destructor
template <typename T>
Array<T>::~Array()
{
	delete [] _array;
	return;
}

// Operator overload
template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& rhs)
{
	if (this != &rhs)
	{
		_size = rhs.size();

		delete [] _array;
		_array = new T[rhs.size()];
		for (unsigned int i = 0; i < rhs.size(); i++)
		{
			_array[i] = rhs[i];
		}
	}

	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i < _size)
	{
		return (_array[i]);
	}
	throw InvalidIndexException();
}

template <typename T>
const T&	Array<T>::operator[](unsigned int i) const
{
	if (i < _size)
	{
		return (_array[i]);
	}
	throw InvalidIndexException();
}

// Member function
template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

// Exception
template <typename T>
const char*	Array<T>::InvalidIndexException::what() const throw()
{
	return ("Invalid index exception");
}

#endif