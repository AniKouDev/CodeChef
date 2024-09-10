#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int c, x, y;
        cin >> c >> x >> y;
        if(c<=x)
            cout << 0;
        else
            cout << (c-x)*y;
        breakline;
    }
}