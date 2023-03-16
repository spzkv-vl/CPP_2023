using namespace std;
int solve_square_equation(float a,float b,float c){
float D, x1,x2;
D=b*b-4*a*c;
if (D>0){
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);
    cout << "x1=" << x1 << '\n';
    cout << "x2=" << x2 << '\n';
}
else if (D==0){
    x1=x2=-b/(2*a);
    cout << "x1=x2=" << x1 << '\n';
}
else {
    cout << "нет действительных корней";
}
    return 0;
}
int main(){
setlocale(0,"Russian");
float a, b, c;
cout << "Введите коэффициенты при степенях x:  ax^2+bx+c=0" << '\n';
cout << "a= ";
cin >> a;
cout << "b= ";
cin >> b;
cout << "c= ";
cin >> c;
solve_square_equation(a,b,c);
}
