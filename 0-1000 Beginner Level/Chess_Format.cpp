#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int time = x+y;
        if(time < 3)
            cout << 1;
        else if(time <11)
            cout << 2;
        else if(time<61)
            cout << 3;
        else 
            cout << 4;
        cout << endl;
    }
}