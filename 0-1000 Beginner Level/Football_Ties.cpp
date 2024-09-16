#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int n = min(a,b);
        n = a - (n/3)*3;
        cout << n;
        breakline;
    }
}