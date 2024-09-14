#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        a = b-a;
        if(a%8 == 0)
            cout << a/8;
        else
            cout << a/8 + 1;
        breakline;
    }
}