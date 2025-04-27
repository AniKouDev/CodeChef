#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 2; i <= n; i++)
            cout << i << " ";
        cout << 1;
        breakline;
    }
}