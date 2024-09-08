#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        float q, p;
        cin >> q >> p;
        if(q>1000){
            p = p-(p*0.1);
        }
        cout << (float)q*p << endl;

    }
}