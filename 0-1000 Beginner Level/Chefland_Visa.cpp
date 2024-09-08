#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        if(b>=a && d>=c && f<=e)
            cout << "Yes";
        else 
            cout << "No";
        cout << endl;
    }
}