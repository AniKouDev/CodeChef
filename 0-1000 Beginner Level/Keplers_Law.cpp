#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b, c, d;
        cin >> a >> b >> c >> d;
        a = pow(a,2)/pow(c,3);
        b = pow(b,2)/pow(d,3);
        if(a==b)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}