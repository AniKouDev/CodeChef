#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char a,b,c;
        cin >> a >> b >> c;
        char d,e;
        cin >> d >> e;
        if(a==d || a==e)
            cout << a << endl;
        else if(b==d || b==e)
            cout << b << endl;
        else
            cout << c << endl;
    }
}