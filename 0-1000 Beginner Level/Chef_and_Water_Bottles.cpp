#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        b = c/b;
        if(a<b)
            cout << a << endl;
        else
            cout << b << endl;
    }
}