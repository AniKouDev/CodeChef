#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        x *= 10;
        if(y>=x)
            cout << x*z;
        else
            cout << y*z;
        breakline;
    }
}