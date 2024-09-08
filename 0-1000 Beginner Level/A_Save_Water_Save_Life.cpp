#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        b += (c/2);
        a=a*b;
        if(a<=d)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}