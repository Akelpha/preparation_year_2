#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main (){
    int N;
    double somme = 0.0;
    cout << "Veillez entrer le nombre d'iteration: "<<endl;
    cin >> N;
    
    for(int k=0;k<N;k++){
        double signe = (k%2==0)?1.0:-1.0;
        somme += signe/(2*k+1);
    }
    double approximation = 4*somme;
    cout << fixed<<setprecision(6);
    cout << "L'approximation de Pi est :"<< approximation <<endl;
    return 0;
}