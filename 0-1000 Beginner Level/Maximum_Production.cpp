#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        cout << max(x*7, (d*y + (7-d)*z));
        breakline;
    }
}