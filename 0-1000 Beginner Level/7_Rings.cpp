#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        x *= y;
        if(x > 9999 && x < 100000)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}