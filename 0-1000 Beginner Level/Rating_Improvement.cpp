#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(y>=x && y<=(x+200))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}