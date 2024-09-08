#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, n, k;
        cin >> x >> n >> k;
        if(x>n*k)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
}