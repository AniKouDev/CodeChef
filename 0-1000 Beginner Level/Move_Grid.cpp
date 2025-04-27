#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = 0, y = 0;
    x = x + a - c;
    y = y + b - d;
    cout << x << " " << y;
}