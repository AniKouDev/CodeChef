#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    long long total = 0;
    while(t--){
        int n;
        cin >> n;
        cout << ((n%2==0)?(n/2):(-1*(n/2 + 1)));
        breakline;
    }
}