#include <iostream>
using namespace std;

int main(){
    float t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x<1500)
            cout << float(x + x*0.1 + x*0.9) << endl;
        else
            cout << float(x + 500 + x*0.98) << endl;
    }
}