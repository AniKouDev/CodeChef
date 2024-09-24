#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        cout << w + (x-y)*z;
        breakline;
    }
}