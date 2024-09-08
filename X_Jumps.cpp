#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(y>x)
            cout << x;
        else if(y==x)
            cout << 1;
        else{
            int div = x/y;
            if(x%y == 0)
                cout << div;
            else
                cout << x - (div*y) + div;
        }
        cout << endl;
    }
}