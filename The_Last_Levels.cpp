#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(x<=3)
            cout << x*y;
        else{
            int div = x/3;
            if((x%3) == 0)
                div--;
            cout << (x*y) + (z*div);
        }
        cout << endl;
    }
}