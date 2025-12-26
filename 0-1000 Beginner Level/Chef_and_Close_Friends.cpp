#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(z == 0){
            cout << 0;
        }
        else if(y > z){
            cout << z*2;
        }
        else if(y < z){
            cout << (z-y+1)*2;
        }
        else{
            cout << y*2;
        }
        cout << endl;
    }
}