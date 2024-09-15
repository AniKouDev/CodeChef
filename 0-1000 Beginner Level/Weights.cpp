#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a==b || a==c || a==d || a==(c+b) || a==(c+d) || a==(b+d) || a==(d+b+c))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}