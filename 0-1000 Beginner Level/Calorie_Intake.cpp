#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if(y*z >= x)
        cout << -1;
    else
        cout << x - (y*z);
}