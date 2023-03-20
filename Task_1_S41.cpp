#include <iostream>
using namespace std;
float squared_sum(float a,float b){
float sum;
sum=(a+b)*(a+b);
return sum;
}
int main(){
setlocale(0,"Russian");
float a, b, c,x1,x2;
cout << "Введите два дробных числа" << '\n';
cout << "a= ";
cin >> a;
cout << "b= ";
cin >> b;
cout << squared_sum(a,b) << '\n';
}
