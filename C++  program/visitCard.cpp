#include <iostream>
using namespace std;

int main(){
    string nom,prenom,filiere,email;
    cout << "Veuillez entrer votre nom ?";
    cin >> nom ;
    cout << "Veuillez entrer votre prenom ?";
    cin >> prenom;
    cout << "Veillez entrer votre filière ?";
    cin >> filiere ;
    cout << "Veuillez entrer votre adresse mail ?";
    cin >> email;

    cout << "+=========================================+"<<endl ;
    cout << "|        NOM    : " <<nom <<"             |"<<endl ;
    cout << "|        Prenom : "  <<prenom<<"          |"<<endl ;
    cout << "|        Filiere: " <<filiere<<"          |"<<endl ;
    cout << "|        Email  : " <<email<<"            |"<<endl ;
    cout << "+=========================================+"<<endl ;

    return 0;
    
}