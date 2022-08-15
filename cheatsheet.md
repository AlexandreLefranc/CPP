[[toc]]

# Day 00

## Namespaces

Permet d'eviter les conflits de nom.

```cpp
namespace	Foo {
	int	var = 1;
	int	f(void) {return (1);}
}
```

On accede aux elements avec `Foo::var` et `Foo::f()`.

## Stdio streams

Permet d'ecrire sur la sortie standard ou d'erreur. Permet de lire de l'entree standard

```cpp
#include <iostream>

std::cout << "Truc a ecrire" << "mais decoupe" << std::endl;
std::cin >> string_var;
std::cerr << "Erreur" << std::endl;
```

## Class et instance de classe

Compose de 2 fichier:
- `Class.hpp`: Contient la classe en elle meme avec les prototypes de ses fonctions membres et non membre.
- `Class.cpp`: Contient l'imprementation des fonctions de la classe

```cpp
// Example.hpp
class Example {
public:
	Example(void); // Constructor
	~Example(void); // Destructor
}
```

```cpp
// Example.cpp
#include <iostream>
#include "Example.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" std::endl;
	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" std::endl;
	return;
}
```

Ne pas oublier les `#include guards`

On peut creer une instance de classe sur la stack comme ceci.

```cpp
Example a_instance;
Example another_instance;
```

## Attribut membre et fonction membre

En plus du constructor et du destructor, les classes peuvent avoir des attribut membre (variable/instance de classe) ainsi que des fonctions membres.

Les fonctions membres peuvent etre appele a partir d une instance.

```cpp
// Example.hpp
class Example {
public:
	int	foo;

	Example(void); // Constructor
	~Example(void); // Destructor

	int bar(void);
}
```

```cpp
Example a_instance;

a_instance.foo = 42;
a_instance.bar();
```

Si on a un pointeur vers une instance plutot que l instance elle meme, on accede aux elements avec `->` au lieu de `.`.

## This

Le mot clef `this` permet d acceder aux attributs et fonction membre d une instance dans une fonction membre.
`this` est un pointeur vers l instance courante

```cpp
// Example.cpp
int Example::bar(void) {
	std::cout << this->foo << std::endl;
}
```

## Initialization list

On peut initialiser une instance avec des valeurs donnees par l utilisateur.
Dans le constructeur:

```cpp
Sample::Sample(int const i): _private_attr(i), _other_attr(NULL)
{
	// Constructor
}
```

## Const

Des qu une fonction membre doit uniquement acceder et non pas modifier un attribut, ajouter le mot clef `const` a la fin de la declaration. Ca permet de nous avertir quand on fait un peu n importe quoi.

```cpp
int	getAttr() const;
```

Bonne pratique tres importante askip !

## Visibilite

Dans une classe, on peut definir 3 niveaux de visibilites (aka d encapsulation):

- `private`: Les elements prives ne sont accessible qu aux fonctions de la classe. Elle ne sont pas accessible a l utilisateur de la classe. Ce sont les details de l implementation de la classe.
- `protected`: cf plus tard
- `public`: Les elements publics sont accessible par tout le monde. C est par les fonctions membres public que l utilisateur manipule la classe.

```cpp
class Sample {
private:
	Sample();
	~Sample();
	int		publicFoo;
	void	publicBar() const;

public:
	int		_privateFoo;
	void	_privateBar() const;
}
```

Par convention, les elements prives sont precede d un underscore.

De maniere general, toutes les variables de la classe sont privees. Elle sont disponible a la lecture et l ecriture avec des fonctions publics (getter et setter respectivement) tel que:

```cpp
int		getPrivateFoo() const;
void	setPrivateFoo(int const i);
```

## Class vs Struct

Les classes et les structures sont tres similaire qvec c++.

La difference est:

- Une structure a un score par defaut public.
- Une classe a un score par defaut prive.

Les structures seront utilise surtout pour stocker des informations de differents types alors que les classes sont destinees a etre manipule et modifie par l utilisateur.

## Accesseurs

Etant donne que tous les attributs sont prives, on y accede avec des accesseurs:

- `get` pour recuperer la valeur d un attribut. Les getters seront toujours `const`.
- `set` pour donner une valeur a un attribut.

Elles seront dans la partie public.

## Comparateurs

Ne pas confondre:
- la comparaison physique, est ce que les deux objets sont identiques ? Cad est ce qu'ils ont la meme adresse em memoire ?
- la comparaison structurelle, est ce que tous les attributs des deux objets sont identiques, quand bien meme que leurs adresses en memoire est differente.

## Fonction et attribut non membre

Permet de definir des variables et fonction qui seront commune pour toutes les instances de la classes.

Les fonctions et attributs non membres sont definis avec le mot clef `static`.

```cpp
Class	Sample {
public:
	Sample();
	~Sample();
	static int	getNbInst();

private:
	static int	_nbInst;
}
```

Dans cet exemple, `_nbInst` sera un attribut non membre. Il sera donc unique au niveau de la classe et commun a toutes les instances.

La variable ne sera initialisee qu une seule fois. Son initialisation est dans le `Sample.cpp` sous la forme `int Sample::_nbInst = 0;`.

La fonction non membre `getNbInst()` est egalement definie dans `Sample.cpp` tel que

```cpp
int Sample::getNbInst() {
	return (Sample::_nbInst);
}
```

On peut appeler la fonction comme ceci: `Sample::getNbInst()`

On remarque que:

- Le mot clef `this` n est jamais utilise.
- On perd le mot clef `static` au moment de la definition.
- On a pas besoin d instance de la classe pour appeler la fonction non membre.

## Pointeurs vers membre

# Day 01

## New et Delete

Permet de creer une variable dans la heap. L'avantage de `new` sur `malloc` est que new appelle le constructeur d une classe.

On libere la memoire avec `delete`. Idem, ca appelle le destructeur d une classe

```cpp
Student	*jim = new Student("jfubar");
// Do stuff
delete jim;
```

On peut egalement initialiser un array dans la heap. Attention, on ne peut pas passer d'arguments au `new array[]`. On peut aussi `delete` un array.

```cpp
Student	*students = new Student[42];
// Do stuff
delete [] students;
```

## Reference

Reference	\= un pointeur constant, toujours dereference et jamais nul
			\~\= une sorte d alias vers une variable existante

## Filestream

Permet de lire et d ecrire dans des fichiers.
Attention, `ifstream` et `ofstream` prennent des C-string

```cpp
#include <fstream>

std::ifstream	ifs(infile);
if (ifs.is_open() == false)
	// Error

std::ofstream	ofs(outfile);
if (ofs.is_open() == false)
	// Error

std::string buffer;
while (ifs.eof() == false)
{
	std::getline(ifs, buffer);
	ofs << buffer << std::endl;
}
```

Ce bout de code recopie un fichier dans un autre.

# Day 02

## Polymorphisme

Permet de creer des classes et fonctions qui peuvent prendre des arguments differents.

```cpp
void	bar(int i);
void	bar(float f);
void	bar(std::string s);
```

On doit ecrire la definition de la fonction pour chaque polymorphe.

## Operator overload

[Wiki de tous les operateurs](https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B)

Permet de definir le comportement d une instance d une classe lorsqu il rencontre un operateur.

Le comportement d assignation `a = b` sera definit comme ca:

```cpp
Type	& operator =(Type const & rhs)
{
	if (this != & rhs)
	{
		this->_attr = rhs.getAttr();
		...
	}
}
```

Cas particulier de l operateur `<<`: Il est independant de la classe.

```cpp
std::ostream	& operator <<(std::ostream & o, Type const & rhs)
{
	o << rhs.getAttr();
	...
	return (o);
}
```

## Forme canonique

Les definitions de classes doivent avoir au minimum:

- Un constructeur par defaut, qui ne prend aucun argument.
- Un constructeur par copie, qui prend une reference constante vers une autre instance de la classe.
- Un destructeur.
- Une surcharge d operateur d assignation `=`.

# Day 03
# Day 04
# Day 05
# Day 06
# Day 07
# Day 08
