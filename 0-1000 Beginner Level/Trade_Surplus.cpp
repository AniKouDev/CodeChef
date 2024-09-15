#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a = a-b;
        c = c-d;
        a=a+c;
        if(a<0)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}