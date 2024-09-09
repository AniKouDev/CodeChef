#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,a,b;
        cin >> x >> a >> b;
        cout << ((a==b)?0:(a-b)*x);
        breakline;
    }
}