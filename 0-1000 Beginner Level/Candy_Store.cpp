#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x>=y)
            cout << y;
        else
            cout << x + (y-x)*2;
        breakline;
    }
}