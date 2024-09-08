#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        float x, y, z;
        cin >> x >> y >> z;
        if(x>50 && y<0.7 && z>5600)
            cout << 10;
        else if(x>50 && y<0.7)
            cout << 9;
        else if(y<0.7 && z>5600)
            cout << 8;
        else if(x>50 && z>5600)
            cout << 7;
        else if(x>50 || y<0.7 || z>5600)
            cout << 6;
        else
            cout << 5;
        cout << endl;
    }
}