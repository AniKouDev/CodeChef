#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float x, y;
        cin >> x >> y;
        if(y >= x/2)
            cout << "yes";
        else
            cout << "no";
        breakline;
    }
}