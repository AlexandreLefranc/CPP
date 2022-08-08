# CPP

# Questions CPP

- Lorsqu'on a une fonction membre a sous-diviser, comment organiser la sous-division ?
	- Option 1: Fonction statique dans le fichier de la class.cpp. Probleme: chiant de passer "this"
	- Option 2: Creer des fonctions membres privees. Probleme: Ajoute de l'info peu pertinente dans le class.hpp.
	- Option 3: Ne pas sous-diviser. Probleme: Fonction difficile a comprendre
- Lorsqu'on souhaite acceder aux attributs prives au sein d'une fonction membre, est il mieux
d'utiliser le getter ou d'aller le chercher directement ?
- Ou mettre les fonctions associes a une classe mais qui n'est ni membre, ni non-membre ? (typiquement, dans cpp01/ex00, ou ecrire les prototypes des fonctions newZombie et randomChump). Dans ce cas c'est assez logique mais si on imagine des fct qui prennent plusieurs classes, ou mettre leurs prototypes ?
- Ou declarer les variables ? L'habitude de C me dit en debut de fonction, mais beaucoup de bonne pratique disent de les declarer le plus proche possible de leurs utilisation.
