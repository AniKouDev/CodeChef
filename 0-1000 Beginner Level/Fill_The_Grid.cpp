#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n%2 == 0 && m%2 == 0){
            cout << 0;
        }
        else if(n%2 != 0 && m%2 != 0){
            cout << n + m - 1;
        }
        else{
            if(n%2 == 0)
                cout << n;
            else    
                cout << m;
        }
        breakline;
    }
}