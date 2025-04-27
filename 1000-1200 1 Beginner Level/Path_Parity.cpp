#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << ((n%2)?((k)?"YES":"NO"):"YES");
        breakline;
    }
}