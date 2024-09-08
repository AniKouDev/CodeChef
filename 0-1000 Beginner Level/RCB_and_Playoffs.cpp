#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(x>=y)
            cout << "Yes";
        else{
            x = y-x;
            if(z*2>=x)
                cout << "Yes";
            else
                cout << "No";
        }
        cout << endl;
    }
}