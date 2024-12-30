#include <iostream>
using namespace std;

#define breakline cout<<endl

bool isPower2(int n){
    return (!(n&(n-1)));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = n; i > 0; i--)
            cout << i << " ";
        breakline;
    }
}