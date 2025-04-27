#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((a==b && a<=c) || (b==c && b<=a) || (c==a && c<=b))
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}