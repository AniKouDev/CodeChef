#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x==y)
            cout << x*2;
        else
            cout << max(x,y)*2 - 1;
        breakline;
    }
}