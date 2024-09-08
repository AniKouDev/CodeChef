#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        cout << x*4 + y*2;
        breakline;
    }
}