#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << (long long)((sqrt(8*n+1) - 1)/2);
        breakline;
    }
}