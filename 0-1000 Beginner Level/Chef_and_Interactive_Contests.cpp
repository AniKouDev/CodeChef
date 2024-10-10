#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int n, r;
    cin >> n >> r;
    while(n--){
        int t;
        cin >> t;
        if(t>=r)
            cout << "Good boi";
        else
            cout << "Bad boi";
        breakline;
    }
}