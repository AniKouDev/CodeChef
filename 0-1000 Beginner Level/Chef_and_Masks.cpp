#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << ((x*100>=y*10)?"CLOTH":"DISPOSABLE");
        breakline;
    }
}