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
        if(a<0)
            if(-1*a <= c)
                cout << "Yes";
            else
                cout << "No";
        else if(a == 0)
            cout << "Yes";
        else
            if(a <= d)
                cout << "Yes";
            else
                cout << "No";
        breakline;
    }
}