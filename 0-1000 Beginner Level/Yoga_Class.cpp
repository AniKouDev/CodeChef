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
            cout << max((a/2)*c, a*b);
        else
            cout << b + max(((a-1)/2)*c, (a-1)*b);
        breakline;
    }
}