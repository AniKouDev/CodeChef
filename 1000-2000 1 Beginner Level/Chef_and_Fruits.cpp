#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int diff = abs(n-m);
        diff = diff - k;
        cout << ((diff>0)?diff:0);
        breakline;
    }
}