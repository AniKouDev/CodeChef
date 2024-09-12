#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        x *= y;
        x *= 2;
        cout << z/x;
        breakline;
    }
}