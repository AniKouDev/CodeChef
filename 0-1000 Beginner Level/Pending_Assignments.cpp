#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        x = x*y;
        z = z*24*60;
        cout << ((z>=x)?"Yes":"No");
        breakline;
    }
}