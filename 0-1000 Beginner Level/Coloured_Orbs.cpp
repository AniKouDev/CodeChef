#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int m = min(a,b);
    a = a-m;
    b = b-m;
    cout << (m*5) + (a*1) + (b*2);
}