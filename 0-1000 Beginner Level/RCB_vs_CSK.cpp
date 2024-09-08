#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(x-y >= 18)
        cout << "RCB";
    else
        cout << "CSK";
    cout << endl;
}