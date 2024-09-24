#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a = a - c;
        b = b - d;
        if(a==b)
            cout << "Any";
        else if(a>b)
            cout << "Second";
        else
            cout << "First";
        breakline;
    }
}