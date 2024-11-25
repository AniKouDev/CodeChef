#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        if(x < n)
            cout << "NO";
        else{
            y = y/3;
            x = x-y;
            n = n-y;
            if(n <= (x/2))
                cout << "YES";
            else
                cout << "NO";
        }
        breakline;
    }
}