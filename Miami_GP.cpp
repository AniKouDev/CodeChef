#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        float x;
        int y;
        cin >> x >> y;
        x*=1.07;
        if(y <= x)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}