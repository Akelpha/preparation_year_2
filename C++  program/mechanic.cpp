#define _USE_MATH_DEFINES 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main (){
    const double GRAVITY = 9.81;
    // Declaration des variables: masse volumique,hauteur,vitesse,diamètre conduite,viscosité dynamique
    double rho = 0, h = 0, v = 0, d = 0, mu = 0;
    double P,Q,Re;
    do {
        cout << "Entrez les differentes valeurs de:  masse volumique(rho),hauteur(h),vitesse(v),diamètre conduite(d),viscosité dynamique(mu) : "<<endl;
        cin >> rho >> h>> v>> d>>mu;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n'); // cin . ignore ( numeric_limits < streamsize >:: max () , '\n ') ;
        }
        
        else if ( rho <= 0 || h <= 0|| v <= 0 ||  d<= 0 || mu<= 0) {
        cout << " Erreur ! Les nombres doivent etre positif . " << endl ;
        }
    }while(rho <= 0 || h <= 0|| v <= 0||  d<= 0 || mu<= 0);
    int choix;
    
     do {
        cout << "\n===== Banc d'analyse : mecanique des fluides =====" << endl;
        cout << "1 : Pression hydrostatique" << endl;
        cout << "2 : Debit volumique" << endl;
        cout << "3 : Reynolds et regime" << endl;
        cout << "0 : Quitter" << endl;
        cout << "Entrez le choix :" << endl;
        cin >> choix;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Erreur ! Veuillez saisir un nombre entier . " << endl ;
            choix = -1; // evite de quitter par erreur (choix != 0)
        }
    switch (choix)
    {
    case 1:
        P= rho*GRAVITY*h;
        cout << fixed<<setprecision(3);
        cout << "La pression hydrostatique est : "<< P<< endl;
        break;
    case 2:
        Q = v*M_PI*pow(d/2,2);
        cout << fixed<<setprecision(3);
        cout << "Le debit columique est de : "<< Q <<endl;
        break;
    case 3:
        Re = (rho*v*d)/mu;
        cout << fixed<<setprecision(3);
        if (Re < 2300) cout << "Laminaire" <<endl;
        if (Re >=2300 && Re <=4000) cout << "Transitoire" <<endl;
        if (Re > 4000) cout << "Turbulent" <<endl;
        break;
    case 0:
        cout << "Merci pour votre visite"<<endl;
        return 0;
        break;
    default:
     cout << "Choix invalide, veuillez recommencer."<<endl;
        break;
    }}while(choix !=0);

  return 0;
}