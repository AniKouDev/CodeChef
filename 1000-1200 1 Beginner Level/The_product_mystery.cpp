#include <iostream>
#include <algorithm>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int b, c;
        cin >> b >> c;
        int x = __gcd(b, c);
        int a = c/x;
        cout << a;
        breakline;
    }
}