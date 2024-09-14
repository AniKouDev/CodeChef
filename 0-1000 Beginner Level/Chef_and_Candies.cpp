#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if(n>x)
        {n = n-x;
        if(n%4 == 0)
            cout << n/4;
        else
            cout << n/4 + 1;}
        else
            cout << 0;
        breakline;
    }
}