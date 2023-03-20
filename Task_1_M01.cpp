#include <iostream>
using namespace std;

int main(){
    int i,j;
for(i=0;i<=10;i++){
   cout << i << '\t';
   }
   cout << '\n';
for(i=1;i<=10;i++){
   cout << i << '\t';
   for(j=1;j<=10;j++){
   cout << i*j << '\t';
   }
 cout << '\n';

}
return 0;
}
