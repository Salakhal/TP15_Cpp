#include "TableHachage.h"

// Fonction de hachage
int TableHachage::hachage(int cle) const {
    return cle % taille;
}

// Constructeur
TableHachage::TableHachage(int t) {
    taille = t;
    table = new list<pair<int, string>>[taille];
}

// Destructeur
TableHachage::~TableHachage() {
    delete[] table;
}

// Insérer
void TableHachage::inserer(int cle, const string& valeur) {
    int index = hachage(cle);
    for (auto& p : table[index]) {
        if (p.first == cle) {
            p.second = valeur;
            return;
        }
    }
    table[index].push_back(make_pair(cle, valeur));
}

// Rechercher
string TableHachage::rechercher(int cle) {
    int index = hachage(cle);
    for (auto& p : table[index]) {
        if (p.first == cle) return p.second;
    }
    return "";
}

// Supprimer
void TableHachage::supprimer(int cle) {
    int index = hachage(cle);
    for (auto it = table[index].begin(); it != table[index].end(); ++it) {
        if (it->first == cle) {
            table[index].erase(it);
            return;
        }
    }
}

// Afficher
void TableHachage::afficher() {
    for (int i = 0; i < taille; i++) {
        cout << "Case " << i << " : ";
        for (auto& p : table[i]) {
            cout << "(" << p.first << ", " << p.second << ") -> ";
        }
        cout << "NULL" << endl;
    }
}
