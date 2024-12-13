#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2){
            cout << -1;
        }
        else{
            for(int i = n; i > 0; i--)
                cout << i << " ";
        }
        breakline;
    }
}