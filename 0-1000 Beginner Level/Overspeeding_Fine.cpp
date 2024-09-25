#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x>100)
            cout << 2000;
        else if(x>70)
            cout << 500;
        else
            cout << 0;
        breakline;
    }
}