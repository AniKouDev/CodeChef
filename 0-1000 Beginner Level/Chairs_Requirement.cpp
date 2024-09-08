#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(y>x)
            cout << 0;
        else
            cout << x-y;
        breakline;
    }
}