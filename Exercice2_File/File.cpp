#include "File.h"

// ===============================
// Noeud
// ===============================
Noeud::Noeud(int v) : valeur(v), suivant(nullptr) {}

// ===============================
// File
// ===============================
File::File(int max) : tete(nullptr), queue(nullptr), tailleMax(max), tailleCourante(0) {}

File::~File() {
    while (!estVide()) {
        defiler();
    }
}

bool File::estVide() const {
    return tete == nullptr;
}

bool File::estPleine() const {
    return tailleCourante >= tailleMax;
}

void File::enfiler(int valeur) {
    if (estPleine()) throw runtime_error("Erreur : la file est pleine !");
    Noeud* nouveau = new Noeud(valeur);
    if (queue == nullptr) tete = queue = nouveau;
    else {
        queue->suivant = nouveau;
        queue = nouveau;
    }
    tailleCourante++;
}

int File::defiler() {
    if (estVide()) throw runtime_error("Erreur : la file est vide !");
    Noeud* temp = tete;
    int val = temp->valeur;
    tete = tete->suivant;
    if (tete == nullptr) queue = nullptr;
    delete temp;
    tailleCourante--;
    return val;
}

void File::afficher() const {
    Noeud* courant = tete;
    cout << "[ ";
    while (courant != nullptr) {
        cout << courant->valeur << " ";
        courant = courant->suivant;
    }
    cout << "]" << endl;
}
