#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int s1 = a+b+c;
        int s2 = d+e+f;
        a = min(a,b);
        a = min(a,c);
        d = min(d,e);
        d = min(d,f);
        s1 = s1 - a;
        s2 = s2 - d;
        if(s1>s2)
            cout << "Alice";
        else if (s1==s2)
            cout << "Tie";
        else
            cout << "Bob";
        breakline;
    }
}