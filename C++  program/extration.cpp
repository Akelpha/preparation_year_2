#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a four digits numbers : "<< endl;
    cin >> N;
    int c4 = N/1000;
    int c3 = (N/100)%10;
    int c2 = (N/10)%10;
    int c1 = N%10;
    int N_inv = c1*1000+c2*100+c3*10+c4;

    cout << "Nombre inversé (N_inv): "<<N_inv<<endl;
    int somme = c4+c3+c2+c1;
    double moyenne = somme/4.0;
    cout  << "Somme des Chiffres :" << somme<<endl;
    cout << "Moyenne réelle:" << moyenne << endl;
    int K = (3*c4+7*c3+c2+5*c1)%10;
    cout <<"Code complet"<<"["<<N<<"]"<<"-"<<"["<<K<<"]"<<endl;
    return 0;
}