#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int a, b;
        cin >> a >> b;
        if(x<=a && y<=b)
            cout << "POSSIBLE" << endl;
        else 
            cout << "IMPOSSIBLE" << endl;

    }
}