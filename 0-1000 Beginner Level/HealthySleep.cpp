#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n > 8)
        cout << "MORE";
    else if(n == 8)
        cout << "PERFECT";
    else
        cout << "LESS";
}