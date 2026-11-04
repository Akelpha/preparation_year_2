#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main (){
    double A=0,e=0;
    int k=0;
    double x_suiv; 
    
    do {
        cout << "Entrez la valeur de A et le seuil de tolérance ε : "<<endl;
        cin >> A >> e;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n'); // cin . ignore ( numeric_limits < streamsize >:: max () , '\n ') ;
        }
        else if ( A <=0 || e<=0) {
        cout << " Erreur ! La valeur de A doit etre stritement positif . " << endl ;
        }
    }while(A<=0 || e<=0);
    double x = A/2.0;
    cout <<fixed<<setprecision(10);
    while (k<50){
        x_suiv = 0.5*(x+A/x);
        cout << "L'etape est : "<<k<< endl;
        cout << x_suiv <<endl;
        if (abs(x_suiv-x)<e){
            break;
        }else {
            x=x_suiv;
            k++;
        }

    }
   
    cout << "La racine carée de A : "<<sqrt(A)<<endl;
    cout << "L'approximation finale est " <<x_suiv<<endl;
    cout << "Ecart: "<<abs(x_suiv-sqrt(A))<< endl;

    
    return 0;

    
}