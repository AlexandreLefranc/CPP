/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:19:31 by alex              #+#    #+#             */
/*   Updated: 2022/11/25 18:01:54 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:

	typedef typename Container::iterator iterator;

	// Constructors
	MutantStack<T, Container>();
	MutantStack<T, Container>(const MutantStack<T, Container>& src);

	// Destructor
	~MutantStack<T, Container>();

	// Operator overload
	MutantStack<T, Container>&	operator=(const MutantStack<T, Container>& rhs);

	// Iterators
	typename Container::iterator	begin();
	typename Container::iterator	end();
};

# include "MutantStack.tpp"

#endif
