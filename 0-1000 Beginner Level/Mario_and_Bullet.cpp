#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        a = b/a;
        if(c<=a)
            cout << 0;
        else
            cout << c-a;
        breakline;
    }
}