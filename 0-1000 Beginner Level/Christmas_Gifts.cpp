#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        int ar = 2 * ((x*y)+(y*z)+(x*z));
        cout << 1000/ar;
        breakline;
    }
}