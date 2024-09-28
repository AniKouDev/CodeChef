#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(c%a == 0 && c%b == 0)
            cout << "ANY";
        else if(c%a == 0 && c%b != 0)
            cout << "CHICKEN";
        else if(c%a != 0 && c%b == 0)
            cout << "DUCK";
        else
            cout << "NONE";
        breakline;
    }
}