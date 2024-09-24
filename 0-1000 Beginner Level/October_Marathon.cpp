#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x>=6)
        cout << "BRONZE";
    else if(x>=3)
        cout << "SILVER";
    else
        cout << "GOLD";
}