#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b;
        cin >> a >> b;
        a = a-(a*0.1);
        if(a<b)
            cout << "ONLINE";
        else if(a==b)
            cout << "EITHER";
        else
            cout << "DINING";
        cout << endl;
    }
}