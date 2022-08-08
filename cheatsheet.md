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

## Const

## Visibilite

## Class vs Struct

## Accesseurs

## Comparateurs

## Fonction et attributs non membre

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

# Day 02


# Day 03
# Day 04
# Day 05
# Day 06
# Day 07
# Day 08
