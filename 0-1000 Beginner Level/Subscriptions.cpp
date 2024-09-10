#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x<=6)
            cout << y;
        else if(x%6 == 0)
            cout << (x/6)*y;
        else
            cout << ((x/6)+1) * y;
        breakline;
    }
}