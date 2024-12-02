#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, k;
        cin >> l >> k;
        if(l%k == 0)
            cout << 0;
        else
            cout << 1;
        breakline;
    }
}