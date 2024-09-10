#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        cout << sum;
        breakline;
    }
}