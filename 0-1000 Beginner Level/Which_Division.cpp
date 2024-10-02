#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r;
        if(r<1600)
            cout << 3;
        else if(r<2000)
            cout << 2;
        else 
            cout << 1;
        breakline;
    }
}