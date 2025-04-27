#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n<=m)
            cout << -1;
        else
            cout << (n+m)-(n-m)+1;
        breakline;
    }
}