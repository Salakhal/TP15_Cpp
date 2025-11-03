#ifndef LISTECHAINEE_H
#define LISTECHAINEE_H

#include "Noeud.h"
#include <iostream>

class ListeChainee {
private:
    Noeud* tete;

public:
    ListeChainee();
    ~ListeChainee();

    void ajouterDebut(int valeur);
    void ajouterFin(int valeur);
    void supprimer(int valeur);
    void afficher() const;
    int taille() const;

    class Iterateur {
    private:
        Noeud* courant;
    public:
        Iterateur(Noeud* n);
        bool operator!=(const Iterateur& autre) const;
        int operator*() const;
        Iterateur& operator++();
    };

    Iterateur debut() const;
    Iterateur fin() const;
};

#endif
