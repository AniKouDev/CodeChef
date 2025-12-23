#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            sum += x;
        }
        if(sum >= 0)
            cout << 0 << endl;
        else{
            sum = abs(sum);
            if(sum%n == 0)
                cout << sum/n;
            else
                cout << (sum/n) + 1;
            cout << endl;
        }
    }
}