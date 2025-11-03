#include "ListeChainee.h"
#include <iostream>
using namespace std;


ListeChainee::ListeChainee() : tete(nullptr) {}

ListeChainee::~ListeChainee() {
    Noeud* courant = tete;
    while (courant != nullptr) {
        Noeud* temp = courant;
        courant = courant->suivant;
        delete temp;
    }
    cout << "Mémoire libérée " << endl;
}


void ListeChainee::ajouterDebut(int valeur) {
    Noeud* nouveau = new Noeud(valeur);
    nouveau->suivant = tete;
    tete = nouveau;
}

void ListeChainee::ajouterFin(int valeur) {
    Noeud* nouveau = new Noeud(valeur);
    if (tete == nullptr) {
        tete = nouveau;
    } else {
        Noeud* courant = tete;
        while (courant->suivant != nullptr) {
            courant = courant->suivant;
        }
        courant->suivant = nouveau;
    }
}


void ListeChainee::supprimer(int valeur) {
    if (tete == nullptr) return;

    if (tete->valeur == valeur) {
        Noeud* temp = tete;
        tete = tete->suivant;
        delete temp;
        return;
    }

    Noeud* courant = tete;
    while (courant->suivant != nullptr && courant->suivant->valeur != valeur) {
        courant = courant->suivant;
    }

    if (courant->suivant != nullptr) {
        Noeud* temp = courant->suivant;
        courant->suivant = courant->suivant->suivant;
        delete temp;
    }
}


void ListeChainee::afficher() const {
    Noeud* courant = tete;
    cout << "[ ";
    while (courant != nullptr) {
        cout << courant->valeur << " ";
        courant = courant->suivant;
    }
    cout << "]" << endl;
}

int ListeChainee::taille() const {
    int count = 0;
    Noeud* courant = tete;
    while (courant != nullptr) {
        count++;
        courant = courant->suivant;
    }
    return count;
}


ListeChainee::Iterateur::Iterateur(Noeud* n) : courant(n) {}

bool ListeChainee::Iterateur::operator!=(const Iterateur& autre) const {
    return courant != autre.courant;
}

int ListeChainee::Iterateur::operator*() const {
    return courant->valeur;
}

ListeChainee::Iterateur& ListeChainee::Iterateur::operator++() {
    courant = courant->suivant;
    return *this;
}

ListeChainee::Iterateur ListeChainee::debut() const { return Iterateur(tete); }
ListeChainee::Iterateur ListeChainee::fin() const { return Iterateur(nullptr); }
