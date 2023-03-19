#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int i,k;
    i=1;
    ifstream in_file("output.txt");
    while (true) {
    in_file >> k;
    if (in_file.eof()) break;
    cout << i << ". " << k << '\n';
    i++;
    }
    in_file.close();
    return 0;
}
