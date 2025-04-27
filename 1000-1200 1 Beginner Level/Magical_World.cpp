#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, x;
        cin >> a >> b >> x;
        if(a*b <= x*x)
            cout << 0;
        else if(1*b <= x*x || a*1 <= x*x)
            cout << 1;
        else
            cout << 2;
        breakline;
    }
}