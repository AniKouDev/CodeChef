#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, l, x;
        cin >> n >> l >> x;
        cout << x*(min(l, n-l));
        breakline;
    }
}