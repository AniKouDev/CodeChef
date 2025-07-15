#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1)
            cout << -1;
        else if(n%2 == 0){
            for(int i = 1; i <= n/2; i++)
                cout << 1 << " ";
            for(int i = n/2; i < n; i++)
                cout << -1 << " ";
        }
        else{
            cout << 1 << " " << 2 << " " << -3 << " ";
            n = n - 3;
            for(int i = 1; i <= n/2; i++)
                cout << 1 << " ";
            for(int i = n/2; i < n; i++)
                cout << -1 << " ";
        }
        breakline;
    }
}