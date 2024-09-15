#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%5 == 0)
            if(n%10 == 0)
                cout << n/10;
            else
                cout << n/10 + 1;
        else
            cout << -1;
        breakline;
    }
}