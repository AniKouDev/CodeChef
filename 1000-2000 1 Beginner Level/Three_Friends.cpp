#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int m = max(a,b);
        m = max(c,m);
        int sum = a+b+c;
        if(sum-m == m)
            cout << "yes";
        else
            cout << "no";
        breakline;
    }
}