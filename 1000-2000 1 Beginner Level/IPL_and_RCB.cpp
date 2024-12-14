#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x<=y)
            cout << 0;
        else if(x%y != 0)
            cout << x%y;
        else
            cout << y;
        breakline;
    }
}