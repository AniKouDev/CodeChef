#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float n, k;
        cin >> n >> k;
        float perHead = n/(k+1);
        int rounded = floor(perHead);
        float myShare = n - (k*rounded);
        cout << myShare;
        breakline;
    }
}