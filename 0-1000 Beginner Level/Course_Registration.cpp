#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        m = m - k;
        if(n <= m)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}