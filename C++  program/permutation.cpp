#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cout << "   Veuillez entrer les valeurs de a,b,c ?";
    cin >> a >> b >> c;
    a = a+b;
    b = a-b;
    c = c-b;

    cout << "a = "<< a <<", b = "<<b << " et c = "<< c <<endl;
    return 0;
}