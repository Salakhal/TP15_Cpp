#include "ListeChainee.h"
#include <iostream>
using namespace std;

int main() {
    ListeChainee liste;

    liste.ajouterFin(10);
    liste.ajouterFin(20);
    liste.ajouterDebut(5);
    liste.ajouterFin(30);

    cout << "Liste après ajouts : ";
    liste.afficher();

    cout << "Taille de la liste : " << liste.taille() << endl;

    liste.supprimer(20);
    cout << "Après suppression de 20 : ";
    liste.afficher();

    cout << "Parcours avec itérateur : ";
    for (auto it = liste.debut(); it != liste.fin(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
