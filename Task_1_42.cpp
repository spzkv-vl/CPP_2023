#include <iostream>

using namespace std;

int Sort(int a[]) {
    int i, j, p;
    for (j=0; j<=10; j++) {
        for (i=0; i<=(10-j); i++) {
            if (a[i]<a[i+1]) {
                p=a[i];
                a[i]=a[i+1];
                a[i+1]=p;
            }
        }
    }
   for (i = 1; i <= 10; i++)
    {
        cout << a[i] << "   ";
    }
    return 0;
}
int main() {
    int a[10]={1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    Sort(a);
}
