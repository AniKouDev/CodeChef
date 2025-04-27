#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if((x+y)%2 == 0)
            cout << "YES";
        else    
            cout << "NO";
        breakline;
    }
}