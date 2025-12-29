#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%3 == 0)
            cout << (n/3) * 5;
        else if(n%3 == 1)
            cout << 8 + ((n-4)/3) * 5;
        else
            cout << 4 + ((n-2)/3) * 5;
        cout << endl;
    }
}