#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <stdexcept>
using namespace std;

// ===============================
// Classe Noeud
// ===============================
class Noeud {
public:
    int valeur;
    Noeud* suivant;
    Noeud(int v);
};


class File {
private:
    Noeud* tete;
    Noeud* queue;
    int tailleMax;
    int tailleCourante;

public:
    File(int max = 1000);
    ~File();

    bool estVide() const;
    bool estPleine() const;

    void enfiler(int valeur);
    int defiler();
    void afficher() const;
};

#endif
