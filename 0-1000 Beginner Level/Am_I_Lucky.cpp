#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int d = a-b;
        b = b%c;
        d = d%c;
        cout << abs(b-d);
        breakline;
    }
}