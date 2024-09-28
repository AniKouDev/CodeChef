#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if((x*y) >= 2*z)
            cout << "No";
        else
            cout << "Yes";
        breakline;
    }
}