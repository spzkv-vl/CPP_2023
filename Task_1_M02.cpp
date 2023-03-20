#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
float Square(float A, int n){
float R, S;
double alfa, gamma, ThisIsAPi = 3.1415926535897932;
alfa = 180/(float)n*ThisIsAPi/180;
R=A/(2*sin(alfa));
gamma=360/(float)n*ThisIsAPi/180;
S=0.5*R*R*n*sin(gamma);
return S;
}
int main(){
    float A;
    int n;
cout << "Enter the side length of the N-gon A= ";
cin >> A;
cout << "Enter the number of sides of the N-gon (at least 3) n= ";
cin >> n;
cout <<  Square(A,n) << '\n';
}
