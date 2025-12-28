#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a != b)
            cout << a + b;
        else
            cout << a + b - 1;
        cout << endl;
    }
}