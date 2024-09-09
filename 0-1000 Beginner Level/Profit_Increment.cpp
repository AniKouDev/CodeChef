#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int z = x-y;
        cout << x+x*0.1 - z;
        breakline;
    }
}