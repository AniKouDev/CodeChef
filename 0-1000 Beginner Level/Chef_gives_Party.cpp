#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        cout << (((n*x<=k)?"Yes":"No"));
        breakline;
    }
}