#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 2*a - 2 + min(b-1, c-1) + min(b-1, a-c) + min(a-b, c-1) + min(a-b,a-c);
        cout << sum;
        breakline;
    }
}