#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x==y && (x>=1 && y>=1))
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}