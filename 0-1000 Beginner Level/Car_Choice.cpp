#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        float c1 = x/a;
        float c2 = y/b;
        if(c1>c2)
            cout << -1 << endl;
        else if(c1 == c2)
            cout << 0 << endl;
        else 
            cout << 1 << endl;
    }
}