#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x = 0;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            x ^= (i+1);
        }
        cout << x;
        breakline;
    }
}