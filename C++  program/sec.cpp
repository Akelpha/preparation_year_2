#include <iostream>
using namespace std;

int main(){
    int sec,minute,heure,secondes,reste;

    cout << "Entrez le nombre de secondes: ";
    cin >> sec ;
    heure = sec / 3600;
    reste = sec % 3600;
    minute = reste / 60;
    secondes = reste % 60;

    cout<< sec << " secondes = " << heure << " heure(s), "<< minute << " minute(s) et "<<secondes <<" secondes(s)";

    return 0 ;
}