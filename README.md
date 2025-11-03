# TP15 – Structures de données orientées objet 

Ce TP couvre la création et la manipulation de différentes structures de données en C++ avec une approche orientée objet.

---

# Exercice 1 : Liste Chaînée Personnalisée

### Objectif
Créer une **liste chaînée simple** permettant d’ajouter, supprimer, afficher des éléments et gérer dynamiquement la mémoire.

### Classes principales
- **Noeud** : représente un élément de la liste
- **ListeChainee** : gère la liste et fournit les méthodes :
  - `ajouterDebut(int valeur)`
  - `ajouterFin(int valeur)`
  - `supprimer(int valeur)`
  - `afficher()`
  - `taille()`
  - Bonus : itérateur personnalisé
 
    
 

# Exercice 2 : Gestion d’une File d’Attente (Queue) Orientée Objet

## Objectif
Implémenter une **file d’attente (FIFO)** en C++ avec une approche orientée objet.  
La file doit gérer dynamiquement les éléments et offrir une interface utilisateur simple pour **enfiler** et **défiler**.

---

## Classes utilisées

### 1. `Noeud`
Représente un élément de la file.

- **Attributs :**
  - `int valeur` : la valeur stockée dans le nœud
  - `Noeud* suivant` : pointeur vers le nœud suivant
 
   ## 2. File

Représente la file d’attente et gère ses opérations.

**Attributs** :

    - `Noeud* tete` : début de la file (élément à retirer en premier)

    -`Noeud* queue` : fin de la file (élément ajouté en dernier)

    -`int tailleMax` : taille maximale de la file (optionnelle)

    -`int tailleCourante` : nombre d’éléments actuels

**Méthodes** :

     -`void enfiler(int valeur)` : ajoute un élément à la fin de la file

     -`int defiler()` : retire et retourne l’élément du début de la file

      -`bool estVide() const` : retourne true si la file est vide

      -`bool estPleine() const `: retourne true si la file est pleine

      -`void afficher() const `: affiche tous les éléments de la file


# Exercice 3 : Table de Hachage Simple

## Objectif
Développer une **table de hachage orientée objet** en C++ avec résolution des collisions par **chaînage**.  
L’objectif est de stocker des paires clé-valeur et de pouvoir les **insérer**, **rechercher**, **supprimer** et **afficher** rapidement.

---

## Classe principale : `TableHachage`

- **Attributs :**
  - `int taille` : nombre de cases dans la table
  - `list<pair<int, string>>* table` : tableau de listes pour gérer les collisions

- **Méthodes :**
  - `inserer(int cle, string valeur)` : ajoute une paire clé-valeur ou remplace la valeur si la clé existe
  - `rechercher(int cle)` : retourne la valeur associée à la clé, ou chaîne vide si non trouvée
  - `supprimer(int cle)` : supprime la paire correspondant à la clé
  - `afficher()` : affiche le contenu de la table, avec toutes les listes de collisions
  - Fonction de hachage : `index = cle % taille`

- **Destructeur :**
  Libère la mémoire allouée pour la table.

---

## Sortie attendue:
```
Table après insertions :
Case 0 : NULL
Case 1 : (1, Alice) -> (6, Bob) -> NULL
Case 2 : NULL
Case 3 : (3, Charlie) -> (8, David) -> NULL
Case 4 : NULL

Recherche clé 6 : Bob
Recherche clé 2 : 

Table après suppression clé 6 :
Case 0 : NULL
Case 1 : (1, Alice) -> NULL
Case 2 : NULL
Case 3 : (3, Charlie) -> (8, David) -> NULL
Case 4 : NULL

```
#  Exercice 4 : Pile Générique avec Template

## Objectif
Créer une **pile (stack)** générique en C++ utilisant **les templates**, capable de gérer différents types de données (int, string, double, etc.).  
La pile doit respecter le principe **LIFO (Last In, First Out)**.

---

## Classe `Pile<T>`

- **Attributs :**
  - `vector<T> elements` : stockage dynamique des éléments de la pile

- **Méthodes :**
  - `void empiler(T element)` : ajoute un élément au sommet de la pile
  - `T depiler()` : retire et retourne l’élément au sommet
  - `T sommet() const` : retourne l’élément du sommet sans le retirer
  - `bool estVide() const` : retourne true si la pile est vide
  - `void inverser()` : inverse l’ordre des éléments de la pile
  - `void afficher() const` : affiche tous les éléments de la pile

- **Gestion d’exception :**
  - `depiler()` et `sommet()` lèvent une exception `runtime_error` si la pile est vide.

---











