#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        if(y%x == 0)
            if(y/x <= n)
                cout << "Yes";
            else
                cout << "No";
        else
            cout << "No";
        breakline;
    }
}