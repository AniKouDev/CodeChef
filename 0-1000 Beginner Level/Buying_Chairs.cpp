#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a < c)
            cout << ((a*2) + (c-a));
        else
            cout << c*2;
        cout << endl;
    }
}