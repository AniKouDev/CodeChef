#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,k;
        cin >> x >> y >> k;
        if(x%k == 0 && y%k==0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}