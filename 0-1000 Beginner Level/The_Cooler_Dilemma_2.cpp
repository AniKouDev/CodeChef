#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, m;
        cin >> x >> y;
        if(x==y)
            cout << 0;
        else if(y%x == 0)
            cout << y/x - 1;
        else 
            cout << y/x;
        breakline;
    }
}