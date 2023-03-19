#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int A,B,j,k;
    setlocale(0,"Russian");
    cout << "Введите два числа A и B, B>A" << '\n';
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    ofstream file_to_write;
    file_to_write.open("output.txt");
    for (j=A; j<=B; j++) {
    k=j*3;
    file_to_write << k << " ";
    }
    file_to_write.close();
    return 0;
}
