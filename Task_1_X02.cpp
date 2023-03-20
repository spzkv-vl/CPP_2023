#include <iostream>
#include <math.h>
using namespace std;
void solve_square_equation(float a,float b,float c,float *x1,float *x2){
float D;
D=b*b-4*a*c;
if (D>0){
    (*x1)=(-b+sqrt(D))/(2*a);
    (*x2)=(-b-sqrt(D))/(2*a);
}
else if (D==0){
    (*x1)=(*x2)=-b/(2*a);
}
else {
    (*x1)=(-b+sqrt(D))/(2*a);
    (*x2)=(-b-sqrt(D))/(2*a);
    cout << "нет действительных корней"<< '\n';
}
}
int main(){
setlocale(0,"Russian");
float a, b, c,x1,x2;
cout << "Введите коэффициенты при степенях x:  ax^2+bx+c=0" << '\n';
cout << "a= ";
cin >> a;
cout << "b= ";
cin >> b;
cout << "c= ";
cin >> c;
solve_square_equation(a,b,c,&x1,&x2);
cout << "x1=" << x1 << '\n';
cout << "x2=" << x2 << '\n';
}
