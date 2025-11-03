#include "Pile.h"
#include <string>

int main() {
    try {
        cout << "--- Test Pile<int> ---" << endl;
        Pile<int> pileInt;
        pileInt.empiler(5);
        pileInt.empiler(10);
        pileInt.empiler(20);
        cout << "Pile initiale : ";
        pileInt.afficher();
        cout << "Sommet : " << pileInt.sommet() << endl;
        pileInt.depiler();
        cout << "Après depiler : ";
        pileInt.afficher();
        pileInt.inverser();
        cout << "Après inverser : ";
        pileInt.afficher();

        cout << "\n--- Test Pile<string> ---" << endl;
        Pile<string> pileStr;
        pileStr.empiler("Salma");
        pileStr.empiler("Hiba");
        pileStr.empiler("Aya");
        cout << "Pile string : ";
        pileStr.afficher();
        cout << "Depiler : " << pileStr.depiler() << endl;
        cout << "Pile après depiler : ";
        pileStr.afficher();

        cout << "\n--- Test Pile<double> ---" << endl;
        Pile<double> pileDbl;
        pileDbl.empiler(3.14);
        pileDbl.empiler(2.718);
        pileDbl.empiler(1.618);
        cout << "Pile double : ";
        pileDbl.afficher();
        pileDbl.inverser();
        cout << "Après inverser : ";
        pileDbl.afficher();

    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
