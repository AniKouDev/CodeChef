#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int k, x;
        cin >> k >> x;
        cout << k-x;
        breakline;
    }
}