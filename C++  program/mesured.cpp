#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES;
#include <cmath>


int main (){
    unsigned short a = 45;
    unsigned short b = 60 ;
    unsigned short teta = 50;
    unsigned short radA ;
    unsigned short x,y,S,w; 
    float c,P,R; 


    cout << "Les valeurs des differents cotes sont: "<< a <<","<<b <<","<< c<<endl;
    radA = (M_PI*teta)/180;
    cout << "50 degre cooresponds a"<< radA << "en radian"<<endl;
    x= pow(a,2)+pow(b,2);
    y = 2*a*b*cos(radA);
    c = sqrt(x-y);
    P = a+b+c/2.0;
    w = P*(P-a)*(P-b)*(P-c);
    S = sqrt(w);
    R = double(a*b*c)/4*S;

    cout << "La longueur du 3 iemecote est : "<<c<<endl;
    cout << "la surface de ce triangle est :" << S << endl;
    cout << "Le rayon du cercle circonscrit est : "<< R <<endl;

    return 0;
}