#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x>=127)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}