#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==100)
            cout << 100;
        else if(n>=81)
            cout << 81;
        else if(n>=64)
            cout << 64;
        else if(n>=49)
            cout << 49;
        else if(n>=36)
            cout << 36;
        else if(n>=25)
            cout << 25;
        else if(n>=16)
            cout << 16;
        else if(n>=9)
            cout << 9;
        else if(n>=4)
            cout << 4;
        else
            cout << 1;
        cout << endl;
    }
}