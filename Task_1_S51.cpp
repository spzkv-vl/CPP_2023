#include <iostream>
#include <string>
using namespace std;
int Reverse(string S){
int i, k;
k=S.size();
for (i = k-1; i >=0; i--)
    {
        cout << S[i] << "   ";
    }
    return 0;
}
int main(){
string S="Testing";
Reverse(S);
}
