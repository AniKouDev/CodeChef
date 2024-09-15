#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a = a*a + b*b;
        c = c*c + d*d;
        if(a<c)
            cout << "Bob";
        else if (a==c)
            cout << "Equal";
        else
            cout << "Alex";
        breakline;
    }
}