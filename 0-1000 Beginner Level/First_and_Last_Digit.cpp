#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0, r, last = 0;;
        while(n){
            if(last == 0){
                sum = n%10;
                last++;
            }
            r=n%10;
            n/=10;
        }
        cout << sum+r;
        breakline;
    }
}