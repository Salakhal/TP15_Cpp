#include "TableHachage.h"

int main() {
    TableHachage th(5);

    th.inserer(1, "Alice");
    th.inserer(6, "Bob");
    th.inserer(3, "Charlie");
    th.inserer(8, "David");

    cout << "Table de hachage après insertions :" << endl;
    th.afficher();

    cout << "\nRecherche clé 6 : " << th.rechercher(6) << endl;
    cout << "Recherche clé 2 : " << th.rechercher(2) << endl;

    th.supprimer(6);
    cout << "\nTable de hachage après suppression clé 6 :" << endl;
    th.afficher();

    return 0;
}
