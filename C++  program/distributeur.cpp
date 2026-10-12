#include <iostream>
using namespace std;

int main(){
    int montant,reste,reste200,reste100,reste50,reste20;

    cout << "Entrez le montant souhaite (en DH) : ";
    cin >> montant;
    reste = montant %200;
    reste200 = montant/200;
    reste100= reste / 100;
    reste = reste%100;
    reste50 = reste/50;
    reste = reste%50;
    reste20 = reste /20;
    reste = reste %20;
    cout << "Billets de 200DH : "<< reste200<< endl;
    cout << "Billets de 100DH : "<< reste100 <<endl;
    cout << "Billets de 50DH  : "<< reste50 <<endl;
    cout << "Billets de 20DH  : "<<reste20 <<endl;
    return 0;



}