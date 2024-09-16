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
            if((n&1) == 1)
                sum++;
            n = n>>1;
        }
        if(sum%2 == 0)
            cout << "EVEN";
        else
            cout << "ODD";
        breakline;
    }
}