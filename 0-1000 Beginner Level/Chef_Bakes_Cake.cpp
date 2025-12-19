#include <iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    y = y/x;
    if(n%y == 0)
        cout << n/y;
    else 
        cout << n/y + 1;
}