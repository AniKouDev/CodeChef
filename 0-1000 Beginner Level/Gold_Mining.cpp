#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        a=a+1;
        if(b<=a*c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}