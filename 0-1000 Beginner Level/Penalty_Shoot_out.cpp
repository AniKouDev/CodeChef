#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        y = y-x;
        if(y>-2 && y<3)
            cout << "Yes";
        else 
            cout << "No";
        breakline;
    }
}