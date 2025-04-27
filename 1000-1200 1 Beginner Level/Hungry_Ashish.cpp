#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(y<=x && z<=x)
            cout << "PIZZA";
        else if(y<=x)
            cout << "PIZZA";
        else if(z<=x)
            cout << "BURGER";
        else
            cout << "NOTHING";
        breakline;
    }
}