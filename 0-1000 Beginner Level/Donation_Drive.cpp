#include <iostream>
using namespace std;

#define breakline cout << endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,n;
        cin >> x >> n;
        cout << x-n;
        breakline;
    }
}