#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a!=c && b!=d)
            cout << 1;
        else
            cout << 2;
        breakline;
    }
}