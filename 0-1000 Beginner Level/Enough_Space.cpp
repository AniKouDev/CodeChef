#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        if(n>=(x+2*y))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}