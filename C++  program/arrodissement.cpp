#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double valeur;
    cout << "Enter a value in dirhams"<<endl;
    cin >> valeur;
    double tronque = (int)(valeur*100)/100;
    cout << fixed<<setprecision(2);
    cout <<"Arrounded amount "<<valeur<<" DH"<<endl;
    cout <<"Truncated amount "<<tronque<<" DH"<<endl;
    return 0;
    
}