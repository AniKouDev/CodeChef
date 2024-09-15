#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a%2 == 0)
            cout << a/2*(b+c);
        else
            cout << a/2*(b+c) + c;
        breakline;
    }
}