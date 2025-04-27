#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            if(k>=a){
                sum += 0;
                k -= a;
            }
            else{
                sum += (a-k)*b;
                k = 0;
            }
        }
        cout << sum;
        breakline;
    }
}