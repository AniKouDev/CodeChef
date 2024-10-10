#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c = a%10;
        c = (c*10) + (a/10);
        int d = b%10;
        d = (d*10) + (b/10);
        if(a > b || a > d || c > b || c > d)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}