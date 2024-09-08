#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        int ran = a*b;
        if(ran<10)
            cout << 0;
        else if(ran<21)
            cout << c;
        else if(ran<42)
            cout << d;
        else 
            cout << e;
        cout << endl;
    }
}