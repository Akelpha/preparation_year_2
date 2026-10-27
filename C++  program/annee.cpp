// Importation des bibliotheques
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaration des variables jour, mois et annee
    int J, M, A;
    int max;
    bool bissextile;

    // Lecture de la date
    cout << "Veuillez entrer les valeurs du jour, du mois et de l'annee :" << endl;
    cin >> J >> M >> A;

    // Verification de l'annee bissextile
    bissextile = (A % 4 == 0 && A % 100 != 0)
                 || (A % 400 == 0);

    // Verification du mois et de l'annee
    if (M < 1 || M > 12 || A < 1) {
        cout << "Date invalide." << endl;
        return 0;
    }

    // Determination du nombre de jours du mois
    switch (M) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            max = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            max = 30;
            break;

        case 2:
            if (bissextile) {
                max = 29;
          } else {
                max = 28;
            }
            break;
    }

    // Verification de la validite du jour
    if (J < 1 || J > max) {
        cout << "Date invalide." << endl;
        return 0;
    }

    // Calcul du lendemain
    if (J < max) {
        J++;
    } else {
        J = 1;

        if (M < 12) {
            M++;
        } else {
            M = 1;
            A++;
        }
    }

    // Affichage au format JJ/MM/AAAA
    cout << "Le lendemain est : "
         << setfill('0') << setw(2) << J << "/"
         << setw(2) << M << "/"
         << setw(4) << A << endl;

    return 0;
}
