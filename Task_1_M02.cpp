#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int Square(float A, int n){
float R, S;
double alfa, gamma, ThisIsAPi = 3.1415926535897932;
alfa = 180/n*ThisIsAPi/180;
R=A/(2*sin(alfa));
gamma=360/n*ThisIsAPi/180;
S=0.5*R*R*n*sin(gamma);
cout <<  S << '\n';
return 0;
}
int main(){
    float A, S;
    int n;
cout << "Enter the side length of the N-gon A=: ";
cin >> A;
cout << "Enter the number of sides of the N-gon (at least 3) n=: ";
cin >> n;
S=Square(A,n);
}
