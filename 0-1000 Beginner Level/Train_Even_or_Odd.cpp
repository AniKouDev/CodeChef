#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int so = 0, se = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(i%2 == 0)
                so += x;
            else
                se += x;
        }
        cout << max(so, se) << endl;
    }
}