#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, m;
        cin >> x >> y >> m;
        if(y>x*m)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}