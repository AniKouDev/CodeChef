#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, v;
        cin >> n >> k >> v;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            long long help;
            cin >> help;
            sum += help;
        }
        long long help = v * (n+k);
        help = help - sum;
        if(help <= 0){
            cout << -1;
        }
        else{
            if(help%k == 0)
                cout << help/k;
            else
                cout << -1;
        }
        breakline;
    }
}