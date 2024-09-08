#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        a = (a>b)?a-b:0;
        cout << a;
        breakline;
    }
}