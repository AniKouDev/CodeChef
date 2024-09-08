#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(((x&1) == 0) && ((x%7) == 0))
            cout << "Alice" << endl;
        else if(((x&1) == 1) && ((x%9) == 0))
            cout << "Bob" << endl;
        else
            cout << "Charlie" << endl;
    }
}