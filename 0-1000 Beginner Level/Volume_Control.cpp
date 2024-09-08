#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        x = x-y;
        if(x < 0)
            x *= -1;
        cout << x << endl;
    }
}