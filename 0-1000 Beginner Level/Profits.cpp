#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(i>x){
                sum += (i-x);
            }
        }
        cout << sum << endl;
    }
}