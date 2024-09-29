#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        while(y--){
            if((x*2) > (x+1000))
                x += x;
            else
                x += 1000;
        }
        cout << x;
        breakline;
    }
}