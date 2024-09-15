#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int sum = 0;
        for(int i = 0; i < n-1; i++){
            int a;
            cin >> a;
            sum += a;
        }
        sum = (n*x) - sum;
        if(sum<0)
            cout << 0;
        else
            cout << sum;
        breakline;
    }
}