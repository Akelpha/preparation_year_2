#include <iostream>
using namespace std;

int main(){
   const double TAUX_CHANGE = 10.85;
   double eur;

   cout << "Veuillez saisir le montant en Euro: "<< endl;
   cin >> eur;
   double dir =eur*TAUX_CHANGE;
   cout << "La valeur du dirhams est : "<< dir<<"MAD"<< endl;

   return 0;

}