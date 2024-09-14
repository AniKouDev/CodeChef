#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        a = 21 - a - b;
        if(a>=1 && a<=10)
            cout << a;
        else
            cout << -1;
        breakline;
    }
}