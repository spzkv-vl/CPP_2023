#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int charToInt(char c){
    return c - '0';
}
int queen_hit(string k1, string k2){
if (!(((k1[0] >= 'a') && (k1[0] <= 'h'))&&((k2[0] >= 'a') && (k2[0] <= 'h')))){
return -1;
}
if (!(((k1[1] >= '1') && (k1[1] <= '8'))&&((k2[1] >= '1') && (k2[1] <= '8')))){
return -1;
}
int x1 = charToInt(k1[0])-48;
int y1 = charToInt(k1[1]);
int x2 = charToInt(k2[0])-48;
int y2 = charToInt(k2[1]);
if ((abs(x1-x2)==abs(y1-y2))||(y1==y2)||(x1==x2)){
return true;
}else return false;
}

int main(){
setlocale(0,"Russian");
int conclusion;
string k1;
cout << "Введите координаты первой клетки: ";
cin >> k1;
string k2;
cout << "Введите координаты второй клетки: ";
cin >> k2;
switch (queen_hit(k1,k2))
    {
    case -1: conclusion=0; cout << "error" <<  ", " << conclusion << endl; return 0;
    }
cout.setf(ios::boolalpha);
cout << queen_hit(k1,k2) << endl;
}
