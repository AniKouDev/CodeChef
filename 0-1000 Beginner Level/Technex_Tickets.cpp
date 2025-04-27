#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x==1)
            cout << 1;
        else if(x%2 == 0)
            cout << x/2 + 1;
        else
            cout << x/2;
        breakline;
    }
}