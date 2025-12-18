#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int m;
        if(a<b && a<c){
            m = a;
            a = 0;
            b -= m;
            c -= m;
        }
        else if(b<c){
            m = b;
            b = 0;
            a -= m;
            c -= m;
        }
        else{
            m = c;
            c = 0;
            a -= m;
            b -= m;
        }
        cout << (m*10) + (a*3) + (b*3) + (c*3) << endl;
    }
}