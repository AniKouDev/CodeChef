#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int val = gcd(x, y);
        if(val != 1)
            cout << 0 << endl;
        else{
            val = gcd(x, y+1);
            int val2 = gcd(x+1, y);
            if(val != 1 || val2 != 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
}