#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        c = c/30;
        a = a+c;
        if(a%b == 0)
            cout << a/b;
        else
            cout << a/b+1;
        breakline;
    }
}