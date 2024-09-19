#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int k = a/2-1;
        int n = (k*(k-1))/2;
        cout << n+k;
        breakline;
    }
}