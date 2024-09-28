#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x%3 == 0)
            cout << 0;
        else if(x%3 == 1)
            cout << 2;
        else
            cout << 1;
        breakline;
    }
}