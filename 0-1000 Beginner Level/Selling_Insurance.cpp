#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b = 100;
        cin >> a;
        a = a*0.2;
        b = b/a;
        if((int)(b)*a==100)
            cout << b;
        else
            cout << (int)(b)+1;
        breakline;

    }
}