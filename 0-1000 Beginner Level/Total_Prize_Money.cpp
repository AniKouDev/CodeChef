#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << x*10 + y*90;
        breakline;
    }
}