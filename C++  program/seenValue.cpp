#include <iostream>
using namespace std ;


int main (){
// int a = -5;
// unsigned int b = 10u ;
// cout << ( a + b ) << endl ;
// return 0;

int a = 11 , b = 4;
double x = 2.5;

double r1 =a / b * x;

double r2 =x * (a / b);

double r3 =x * a / b;

double r4 =( double ) ( a / b ) + ( double ) a / b ;

int r5 =( int ) ( x + 1.9) * ( a % b ) + ( int ) ( x * 2) / b ;
cout << r1 << endl;
cout << r2 << endl;
cout << r3 << endl;
cout <<r4 << endl;
cout << r5 << endl;

return 0;
 
}