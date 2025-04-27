#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int minus = a-b;
    if(minus%10 != 9)
        cout << minus+1;
    else
        cout << minus-1;
}