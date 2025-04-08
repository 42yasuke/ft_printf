# 📜 ft_printf

> **ft_printf** est une implémentation personnalisée de la fonction `printf` en C. Elle permet d'afficher des informations à l'écran en utilisant une syntaxe formatée, tout en apprenant à gérer des types variés, les flags et les spécificateurs.

## 🛠️ Objectif

L'objectif de ce projet est de recréer une version simplifiée de la fonction `printf` de la bibliothèque standard en C. Cela permet de mieux comprendre la gestion des chaînes de formatage, les différents types de données et la gestion de la mémoire dans un contexte fonctionnel.

---

## 🧩 Fonctionnalités Implémentées

- La fonction `ft_printf` gère plusieurs spécificateurs de format, comme :
  - `%d`, `%i` pour afficher des entiers
  - `%c` pour afficher un caractère
  - `%s` pour afficher une chaîne de caractères
  - `%x`, `%X` pour afficher des entiers en hexadécimal (minuscule et majuscule)
  - `%u` pour afficher un entier non signé
  - `%p` pour afficher une adresse mémoire

---

## 🧪 Compilation et Utilisation

### Compilation

Le projet utilise un `Makefile` pour faciliter la compilation.

```bash
make
```

Pour nettoyer les fichiers objets :

```bash
make clean
```

Pour supprimer tous les fichiers compilés (objets + exécutable) :

```bash
make fclean
```

Pour recompiler le projet :

```bash
make re
```

### 📄 Utilisation

Une fois le projet compilé, tu peux utiliser `ft_printf` comme ceci :

```c
#include "ft_printf.h"

int main()
{
    int result = ft_printf("Hello %s, your number is %d\n", "World", 42);
    return 0;
}
```

---
