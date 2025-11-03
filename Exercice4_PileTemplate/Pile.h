#ifndef PILE_H
#define PILE_H

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class Pile {
private:
    vector<T> elements;

public:
    void empiler(T element) { elements.push_back(element); }
    T depiler() {
        if (estVide()) throw runtime_error("Erreur : pile vide !");
        T top = elements.back();
        elements.pop_back();
        return top;
    }
    T sommet() const {
        if (estVide()) throw runtime_error("Erreur : pile vide !");
        return elements.back();
    }
    bool estVide() const { return elements.empty(); }
    void inverser() {
        int n = elements.size();
        for (int i = 0; i < n/2; i++) swap(elements[i], elements[n-1-i]);
    }
    void afficher() const {
        cout << "[ ";
        for (auto& e : elements) cout << e << " ";
        cout << "]" << endl;
    }
};

#endif
