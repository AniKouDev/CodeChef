#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        a = a*10;
        b = b*5;
        if(a==b)
            cout << "ANY";
        else if(a<b)
            cout << "SECOND";
        else
            cout << "FIRST";
        breakline;
    }
}