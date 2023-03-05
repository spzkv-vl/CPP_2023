#include <iostream>
using namespace std;
int main() {
    int n, d, sum;
    n=1;
    d=7;
    sum=0;
    while (n<1000) {
    if (n%d==0) {
    sum+=n;
    }
    n+=4;
    }
cout << sum << '\n';
return 0;
}
