#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        c *= d;
        a += c;
        if(a>b)
            cout << "overflow";
        else if (a==b)
            cout << "filled";
        else
            cout << "unfilled";
        breakline;

    }
}