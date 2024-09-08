#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x%2 == 0)
            cout << x;
        else 
            cout << x+2;
        cout << endl;
    }
}