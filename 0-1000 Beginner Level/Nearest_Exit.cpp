#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x > 50)
            cout << "RIGHT";
        else
            cout << "LEFT";
        breakline;
    }
}