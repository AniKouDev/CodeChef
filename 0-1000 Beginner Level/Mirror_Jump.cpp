#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int h = (a+1-b);
        b = a-b;
        h = a-h;
        if(b>h){
            cout << h+1;
        }
        else{
            cout << b;
        }
        cout << endl;
    }
}