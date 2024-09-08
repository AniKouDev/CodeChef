#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x*2 > y*5)
            cout << "Chocolate";
        else if(x*2 < y*5)
            cout << "Candy";
        else
            cout << "Either";
        breakline;
    }
}