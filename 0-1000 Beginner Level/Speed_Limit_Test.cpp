#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b, c, d;
        cin >> a >> b >> c >> d;
        a = a/b;
        c = c/d;
        if(a<c)
            cout << "Alice";
        else if(a==c)
            cout << "Equal";
        else
            cout << "Bob";
        breakline;
    }
}