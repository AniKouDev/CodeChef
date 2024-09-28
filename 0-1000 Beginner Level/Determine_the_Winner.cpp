#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a = max(a,b);
        c = max(c,d);
        if(a>c)
            cout << "Q";
        else if(a==c)
            cout << "TIE";
        else
            cout << "P";
        breakline;
    }
}