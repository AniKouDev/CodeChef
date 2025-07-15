#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = n + n - 1 + n - 2;
        if(sum <= 2*n)
            cout << -1;
        else
            cout << sum;
        breakline;
    }
}