#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a>b && a>c)
            cout << "Alice";
        else if(b>c)
            cout << "Bob";
        else
            cout << "Charlie";
        breakline;
    }
}