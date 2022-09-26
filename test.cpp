#include <iostream>

class Dog
{
private:

	std::string	_name;

public:

	// Constructor
	Dog(const std::string& name);

	// Destuctor
	~Dog();

	// Accessors
	const std::string&	getName() const;
	void				setName(const std::string& name);

	// Fonction membre
	void	goToToiletteur() const;

};

Dog::Dog(const std::string& name): _name(name)
{
	std::cout << "Je viens de naitre avec le nom " << this->_name << std::endl;
}

Dog::~Dog()
{
	std::cout << this->_name << " est mort ;(" << std::endl;
}

const std::string&	Dog::getName() const
{
	return (this->_name);
}

void				Dog::setName(const std::string& name)
{
	this->_name = name;
}

void	Dog::goToToiletteur() const
{
	std::cout << this->_name << " est alle chez le toiletteur ca fait du bien !" << std::endl;
}


int	main()
{
	Dog croquette = Dog("Croquette");
	Dog chien = Dog("Chien");

	std::cout << croquette.getName() << std::endl;
	croquette.setName("Crocro");
	std::cout << croquette.getName() << std::endl;
	croquette.goToToiletteur();
	chien.goToToiletteur();
}

// class Humain
// {
// private:
//
// 	Dog*		_dog;
// 	Watch*		_watch;
// 	std::string	_lastName;
// 	int			_anniv[5];
// };