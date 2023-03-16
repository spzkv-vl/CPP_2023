#include <iostream>

using namespace std;

int main(){
int num, p, *a, k, j, i;
j=0;
cin >> num;
while (num >0){
    a[j]=num%2;
    num=num/2;
    j++;
}
k=j;
for (i = k-1; i >=0; i--)
    {
        cout << a[i] << "   ";
    }
    return 0;
}
