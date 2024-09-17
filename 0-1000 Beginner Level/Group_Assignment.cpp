#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        cout << 2*n - x + 1;
        breakline;
    }
}