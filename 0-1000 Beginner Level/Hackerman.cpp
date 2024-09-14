#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        a += b;
        if(a==2 || a==3 || a==5 || a==7 || a==11)
            cout << "Alice";
        else
            cout << "Bob";
        breakline;
    }
}