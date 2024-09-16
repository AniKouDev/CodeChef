#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(y%z == 0)
            y=y/z;
        else
            y=y/z+1;
        cout << x*y;
        breakline;
    }
}