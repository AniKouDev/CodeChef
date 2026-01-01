#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(float(a/100.0) > float(b/225.0))
            cout << "Large";
        else if(float(a/100.0) < float(b/225.0))
            cout << "Small";
        else
            cout << "Equal";
        cout << endl;
    }
}