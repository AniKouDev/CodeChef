#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float x, y;
        cin >> x >> y;
        float ans = ceil((y*10 - x*10)/(100-y));
        cout << ans;
        breakline;
    }
}