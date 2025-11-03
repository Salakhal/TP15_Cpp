#include "File.h"

int main() {
    File file(10); // taille max 10 pour tester
    int choix, val;

    while (true) {
        cout << "\n--- Menu File (Queue) ---\n";
        cout << "1. Enfiler (ajouter)\n";
        cout << "2. Defiler (retirer)\n";
        cout << "3. Afficher\n";
        cout << "4. Quitter\n";
        cout << "Votre choix : ";
        cin >> choix;

        try {
            switch (choix) {
                case 1:
                    cout << "Valeur à enfiler : ";
                    cin >> val;
                    file.enfiler(val);
                    cout << val << " ajouté à la file.\n";
                    break;
                case 2:
                    val = file.defiler();
                    cout << val << " retiré de la file.\n";
                    break;
                case 3:
                    cout << "File actuelle : ";
                    file.afficher();
                    break;
                case 4:
                    cout << "Au revoir !\n";
                    return 0;
                default:
                    cout << "Choix invalide !\n";
            }
        } catch (const runtime_error& e) {
            cout << e.what() << endl;
        }
    }

    return 0;
}
