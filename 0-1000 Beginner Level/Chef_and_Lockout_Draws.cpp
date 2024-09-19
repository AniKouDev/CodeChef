#include <iostream>
using namespace std;

#define breakline cout<<endl 

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        int h1, h2, h3;
        h1 = min(a,b);
        h1 = min(h1,c);
        h3 = max(a,b);
        h3 = max(h3,c);
        h2 = sum - h1 - h3;
        a = h1;
        b = h2;
        c = h3;
        if(a<c){
            if(a+b == c)
                cout << "Yes";
            else
                cout << "No";
        }
        else if (a>c)
            if(b+c == a)
                cout << "Yes";
            else
                cout << "No";
        else
            cout << "No";
        breakline;
    }
}