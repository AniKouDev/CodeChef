#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        x = 100 - 1*x;
        y = 200 - 2*y;
        if(x<y)
            cout << "FIRST" << endl;
        else if(x > y)
            cout << "SECOND" << endl;
        else
            cout << "BOTH" << endl;
    }
}