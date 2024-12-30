#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int count = 0;
        while(n!=0){
            if(n&1 == 1)
                count++;
            n = n>>1;
        }
        cout << count-1;
        breakline;
    }
}