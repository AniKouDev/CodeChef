#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int countZero(int n){
    if(n<5)
        return 0;
    return floor(n/5)+countZero(floor(n/5));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << countZero(n);
        breakline;
    }
}