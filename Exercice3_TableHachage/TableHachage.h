#ifndef TABLEHACHAGE_H
#define TABLEHACHAGE_H

#include <iostream>
#include <list>
#include <string>
using namespace std;

class TableHachage {
private:
    int taille;
    list<pair<int, string>>* table;
    int hachage(int cle) const;

public:
    TableHachage(int t = 10);
    ~TableHachage();

    void inserer(int cle, const string& valeur);
    string rechercher(int cle);
    void supprimer(int cle);
    void afficher();
};

#endif
