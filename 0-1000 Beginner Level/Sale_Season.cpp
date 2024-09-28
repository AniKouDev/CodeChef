#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x>5000)
            cout << x-500;
        else if(x>1000)
            cout << x - 100;
        else if(x>100)
            cout << x-25;
        else
            cout << x;
        breakline;
    }
}