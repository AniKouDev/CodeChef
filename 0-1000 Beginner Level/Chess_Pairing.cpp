#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(b - (2*a - (b)) < 0)
            cout << 0;
        else
            cout << b - (2*a - (b));
        breakline;
    }
}