#include "TableHachage.h"

int main() {
    TableHachage th(5);

    th.inserer(1, "Ali");
    th.inserer(6, "kawtar");
    th.inserer(3, "Chihab");
    th.inserer(8, "Donia");

    cout << "Table de hachage après insertions :" << endl;
    th.afficher();

    cout << "\nRecherche clé 6 : " << th.rechercher(6) << endl;
    cout << "Recherche clé 2 : " << th.rechercher(2) << endl;

    th.supprimer(6);
    cout << "\nTable de hachage après suppression clé 6 :" << endl;
    th.afficher();

    return 0;
}
