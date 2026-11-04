#include <iostream>
#include <iomanip>
using namespace std;


int main (){
    int classe;
    double montant;
    int nb =0;
    double total = 0.0;
    int d = 0;
    char mode_paiement = ' ';
    const double moto_frais = 5.00;
    const double voiture_frais = 10.00;
    const double camion_frais = 20.00;
    const double prix_km_moto = 0.25;
    const double prix_km_voiture = 0.50;
    const double prix_km_camion = 0.95;
    
    while(true){
        montant = 0.0;
        cout<<"Enter the class value : "<<endl;
        cin >> classe;
                if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Erreur ! Entrez un nombre." << endl;
            continue;
        }
        if(classe == 0){
            break;
        }
        else if (classe < 0 || classe > 3){
            cout<< "Veuillez entrer une valeur entre 1 et 3"<<endl;
            continue;

        }
        do {
        cout << "Entrez la valeur de la distance: "<<endl;
        cin >> d;
        cout << "Enter the payement mode : ";
        cin>> mode_paiement;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n'); // cin . ignore ( numeric_limits < streamsize >:: max () , '\n ') ;
        }
        
        else if ( d<=0) {
        cout << " Erreur ! La distance doit etre positif . " << endl ;
        }
        else if (mode_paiement != 'T' && mode_paiement != 'E') {
            cout << "Erreur ! Vous devez entrer T (Telepeage) ou E (Especes)." << endl;
        }
        }while(d<=0 || (mode_paiement != 'T' && mode_paiement != 'E'));


        switch (classe){
        case 1:
            montant = moto_frais+(d*prix_km_moto);
        break;
        case 2:
            montant = voiture_frais+(d*prix_km_voiture);
            break;
        case 3:
            montant = camion_frais+(d*prix_km_camion);
            break;
        case 0:
            break;
        default:
            break;
        } 
    
        if(mode_paiement == 'T'){
            montant *= 0.90;
        }
        cout << fixed<< setprecision(2);
        cout << "Le montant à payer est de : " << montant <<endl;

        
        nb++;
        total += montant;

    }

    cout << "Le nombre total de vehicule est "<<nb <<endl;
    cout << "Le total est de " << total <<endl;
    return 0;

    
}