# CPP

# Questions CPP

- Lorsqu'on a une fonction membre a sous-diviser, comment organiser la sous-division ?
	- Option 1: Fonction statique dans le fichier de la class.cpp. Probleme: chiant de passer "this"
	- Option 2: Creer des fonctions membres privees. Probleme: Ajoute de l'info peu pertinente dans le class.hpp.
	- Option 3: Ne pas sous-diviser. Probleme: Fonction difficile a comprendre
- Lorsqu'on souhaite acceder aux attributs prives au sein d'une fonction membre, est il mieux
d'utiliser le getter ou d'aller le chercher directement ?
