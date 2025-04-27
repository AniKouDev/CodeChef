#include<iostream>
using namespace std;

int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if(abs(x-y) < abs(a-b))
        cout << "First";
    else if (abs(x-y) == abs(a-b))
        cout << "Both";
    else
        cout << "Second";
}