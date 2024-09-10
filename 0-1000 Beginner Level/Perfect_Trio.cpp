#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b+c || c == b+a || b == a+c)
            cout << "Yes";
        else
            cout << "No";
        breakline;

    }
}