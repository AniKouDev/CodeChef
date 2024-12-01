#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n==1)
            cout << 1;
        else if(n<4)
            cout << n-1;
        else
            cout << n;
        breakline;
    }
}