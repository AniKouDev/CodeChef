#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 1;
        for(int i = 1; i < n-1; i++)
            cout << 0;
        cout << 1;
        breakline;
    }
}