#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a*b <= c*d)
            cout << "yes";
        else
            cout << "no";
        breakline;
    }
}