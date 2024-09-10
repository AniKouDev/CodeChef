#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x*0.1 > 100)
            cout << x*0.1;
        else
            cout << 100;
        breakline;
    }
}