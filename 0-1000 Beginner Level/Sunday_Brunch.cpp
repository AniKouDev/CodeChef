#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        x = x/y;
        cout << ((x>20)?20:x);
        breakline;
    }
}