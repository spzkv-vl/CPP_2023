#include <iostream>

using namespace std;
int main() {
    int num = 12;
    char letter = 'X';
    double f = 5e3;
    float value = 10.56f;
    double l = f/3.;
    cout << l << '\n';
    float liv = num/7. - (int)letter;
    cout << liv << '\n';
    int ost = num % 5;
    cout << ost << '\n';
    double sum = f-value;
    cout << sum << '\n';
return 0;
}
