#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if(x<=y)
            cout << a*x;
        else{
            cout << b*x + (a-b)*y;
        }
        breakline;
    }
}