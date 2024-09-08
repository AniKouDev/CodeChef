#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x==0)
            cout << "Liquid";
        else if(y == 0)
            cout << "Solid";
        else
            cout << "Solution";
        cout << endl;
    }
}