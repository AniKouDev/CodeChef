#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, k, p;
        cin >> n >> x >> k >> p;
        if(k == 0)
            cout << p;
        else if(k>0 && k<x)
            cout << p + k*10;
        else if(k==x)
            cout << p + k*10;
        else if(k>x && k<n)
            cout << p + x*10 + (k-x)*5;
        else if(k==n)
            cout << p + x*10 + (k-x)*5 + 20;
        breakline;
    }
}