#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        x = x-y;
        if(x==0)
            cout << y*2 - 1;
        else
            cout << y*2 + x;
        breakline;
    }
}