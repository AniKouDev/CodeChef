#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a==b || b==c || a==c)
            cout << "Yes";
        else if(abs(a-b) <= d || abs(a-c) <= d || abs(c-b) <= d)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}