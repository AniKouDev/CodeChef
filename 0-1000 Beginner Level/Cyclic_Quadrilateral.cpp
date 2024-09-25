#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a+c==180 && b+d==180)    
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}