#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    const double FRAIS_DACCES_TERMINAL = 15.00;
    const double TARIF_RECHARGE = 2.40;
    const double TVA = 0.20;

    int h1,h2,m1,m2,s1,s2;
    cout << "Enter the starting hour in Hour Min Sec:" << endl;
    cin >> h1 >>m1 >>s1;
    cout << "Enter the ending hour in Hour Min Sec:" << endl;
    cin >> h2 >>m2 >>s2;

    int dtc = (3600*h2+60*m2+s2)-(3600*h1+60*m1+s1);
    int heures = dtc/3600;
    int minutes = (dtc%3600)/60;
    int secondes = dtc % 60;

    double dd = dtc/60.0;
    double coutHT = dd*TARIF_RECHARGE;
    double sousHT = FRAIS_DACCES_TERMINAL + coutHT;
    double montantTVA = sousHT *TVA;
    double totalTTC = sousHT+montantTVA;

    cout << fixed << setprecision(2);
    cout << "\n=====================================\n";
    cout << "\tOperateur : \"GreenStation UEMF\"\n";
    cout << "=====================================\n";
    cout << "Duree de charge :\n";
    cout << "\t" << heures << "h " << minutes << "m " << secondes << "s\n";
    cout << "\tSoit " << dd << " min\n";
    cout << "-------------------------------------\n";
    cout << "Frais fixes d'acces\t" << FRAIS_DACCES_TERMINAL << " DH\n";
    cout << "Cout de recharge HT\t" << coutHT << " DH\n";
    cout << "Sous-total HT\t\t" << sousHT << " DH\n";
    cout << "TVA (20%)\t\t" << montantTVA << " DH\n";
    cout << "-------------------------------------\n";
    cout << "TOTAL TTC\t\t" << totalTTC << " DH\n";
    cout << "=====================================\n";
    cout << "\tMerci de votre visite !\n";

    return 0;

}