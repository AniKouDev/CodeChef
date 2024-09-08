#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        int left = a-b;
        int need = c+d+e;
        if(left < need)
            cout << "No";
        else
            cout << "Yes";
        cout << endl;
    }
}