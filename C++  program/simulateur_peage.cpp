#define _USE_MATH_DEFINES 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main (){
    int classe;
    double montant;
    while(true){
        cout<<"Enter the class value : "<<endl;
        cin >> classe;
        if(classe == 0){
            break;
        }
        else if (classe > 3){
            cout<< "Veuillez entrer une valeur entre 1 et 3";
        }
    }
    int d;
    char mode_paiement;
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
        else if (mode_paiement != 'T' || 'E'){
        cout << " Erreur ! vous devez entrer soit T(Télépéage) et E(Espèces). " << endl ;
        }
    }while(d<=0 || (mode_paiement != 'T' || 'E'));
    const double moto_frais = 5.00;
    const double voiture_frais = 10.00;
    const double camion_frais = 20.00;
    const double prix_km_moto = 0.25;
    const double prix_km_voiture = 0.50;
    const double prix_km_camion = 0.95;

    switch (classe)
    {
    case 1:
        montant = moto_frais+(d*prix_km_moto);
        break;
    case 2:
        montant = voiture_frais+(d*prix_km_voiture);
    case 3:
        montant = camion_frais+(d*prix_km_camion);
    case 0:
        break;
    default:
        break;
    }
    if(mode_paiement == 'T'){
        montant *= 0.90;
    }
    cout << fixed<< setprecision(2);

    
}